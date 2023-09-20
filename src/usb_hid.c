/*
 * usb_hid.c
 *
 *  Created on: 20 Sept 2023
 *      Author: StianJSulebak
 */

#include <stdio.h>
#include "em_device.h"
#include "em_cmu.h"
#include "em_usb.h"
#include "src/usb_hid.h"

/* Timer indices. */
#define KBD_LED_TIMER     0
#define KBD_POLL_TIMER    1
#define KBD_SUSPEND_TIMER 2

#define KBD_USB_ADDRESS   1     /* USB address used for keyboard. */
#define KBD_INT_IN_HC     2     /* Host channel nr. used for keyboard     */
                                /* interrupt IN endpoint. Ch. 0 and 1     */
                                /* defaults to the control endpoint (EP0) */
#define KBD_IN_REPORT_LEN 8     /* Length of keyboard interrupt IN report.*/


typedef struct
{
  uint8_t   bLength;            /* Numeric expression that is the total size of the HID descriptor.       */
  uint8_t   bDescriptorType;    /* Constant name specifying type of HID descriptor.                       */
  uint16_t  bcdHID;             /* Numeric expression identifying the HID Class Specification release.    */
  uint8_t   bCountryCode;       /* Numeric expression identifying country code of the localized hardware. */
  uint8_t   bNumDescriptors;    /* Numeric expression specifying the number of class descriptors.         */
  uint8_t   bReportDescriptorType;  /* Constant name identifying type of class descriptor.                */
  uint16_t  wDescriptorLength;  /* Numeric expression that is the total size of the Report descriptor.    */
} USB_HIDDescriptor_TypeDef;



STATIC_UBUF( tmpBufHid, 1024 );

static USBH_Device_TypeDef  device;
static USBH_Ep_TypeDef      ep;
static volatile bool        ledTimerDone;
static volatile bool        pollTimerDone;
static volatile bool        suspendTimerDone;


int usb_hid( void )
{
    int connectionResult;
    USBH_Init_TypeDef initstruct = USBH_INIT_DEFAULT;


    CMU_ClockSelectSet(cmuClock_HF, cmuSelect_HFXO);
    CMU_ClockEnable(cmuClock_GPIO, true);
    USBH_Init( &initstruct );

    for (;;)
    {
        /* Wait for maximum 10 seconds. */
        connectionResult = USBH_WaitForDeviceConnectionB( tmpBufHid, 10 );

        if ( connectionResult == USB_STATUS_DEVICE_MALFUNCTION )
        {
          printf( "\nA malfunctioning device was attached, please remove device.\n" );
          continue;
        }

        else if ( connectionResult == USB_STATUS_PORT_OVERCURRENT )
        {
          printf( "\nVBUS overcurrent condition, please remove device.\n" );
          continue;
        }

        else if ( connectionResult != USB_STATUS_OK )
        {
          printf( "\nsomething went wrong.\n" );
          continue;
        }

        if (CheckDevice())
        {

            InitHidDevice();

            ledTimerDone = false;
            pollTimerDone = false;
            suspendTimerDone = false;

            USBTIMER_Start( KBD_POLL_TIMER, ep.epDesc.bInterval, PollTimeout );

            while ( USBH_DeviceConnected() )
            {


                if ( pollTimerDone )
                {
                  printf("Checking button press...");                /* Any key pressed ? */
                  HidCheckKeyPress();
                  pollTimerDone = false;
                  USBTIMER_Start( KBD_POLL_TIMER, ep.epDesc.bInterval, PollTimeout );
                }

            }

            USBTIMER_Stop( KBD_POLL_TIMER );
        }

    }


    return 0;
}


void HidCheckKeyPress( void )
{
  char c;

  if ( USBH_ReadB( &ep, tmpBufHid, ep.epDesc.wMaxPacketSize, 3 )
       == KBD_IN_REPORT_LEN )
  {
    if ( tmpBufHid[ 2 ] )
    {
      c = tmpBufHid[2];

      if ( c )
        putchar( c );
    }
  }
}



bool CheckDevice( void )
{
    int i;
    STATIC_UBUF( tmpBufHidCheck, 1024 );

    if (
        USBH_QueryDeviceB( tmpBufHidCheck, sizeof(tmpBufHidCheck),
                           USBH_GetPortSpeed() )
           == USB_STATUS_OK)
    {
      /* Print basic device information. */
      printf( "\nDevice VID/PID is 0x%04X/0x%04X, device bus speed is %s",
              ((USBH_Device_TypeDef*)tmpBufHidCheck)->devDesc.idVendor,
              ((USBH_Device_TypeDef*)tmpBufHidCheck)->devDesc.idProduct,
              USBH_GetPortSpeed() == PORT_FULL_SPEED ? "FULL" : "LOW" );

      USBH_PrintDeviceDescriptor( USBH_QGetDeviceDescriptor( tmpBufHidCheck ) );
      USBH_PrintConfigurationDescriptor( USBH_QGetConfigurationDescriptor( tmpBufHidCheck, 0 ), USB_CONFIG_DESCSIZE );
      USBH_PrintInterfaceDescriptor(USBH_QGetInterfaceDescriptor( tmpBufHidCheck, 0, 0 ));

      for ( i=0; i<USBH_QGetInterfaceDescriptor( tmpBufHidCheck, 0, 0 )->bNumEndpoints; i++ )
      {
        USBH_PrintEndpointDescriptor(USBH_QGetEndpointDescriptor( tmpBufHidCheck, 0, 0, i ) );
      }

        /* Qualify the device */
      if (  USBH_QGetInterfaceDescriptor( tmpBufHidCheck, 0, 0 )->bInterfaceClass    == USB_CLASS_HID          )
      {
        printf( "\nValid HID device.\n" );
        return true;
      }
      else
      {
        printf( "\nNot a valid HID keyboard device, please remove device.\n" );
      }
  }
  else
  {
    printf( "\nDevice enumeration failure, please remove device.\n" );
  }

  return false;

}

void InitHidDevice( void )
{
  USB_HIDDescriptor_TypeDef *hidd;

  /* Print the HID descriptor, assume that it is located just after   */
  /* the interface descriptor.                                        */

  hidd = (USB_HIDDescriptor_TypeDef*)
         ( (uint8_t*)USBH_QGetInterfaceDescriptor( tmpBufHid, 0, 0 ) +
           sizeof( USB_InterfaceDescriptor_TypeDef ) );

  printf( "\nHID descriptor:" );
  printf( "\n bLength                %d",     hidd->bLength               );
  printf( "\n bDescriptorType        0x%02X", hidd->bDescriptorType       );
  printf( "\n bcdHID                 0x%04X", hidd->bcdHID                );
  printf( "\n bCountryCode           0x%02X", hidd->bCountryCode          );
  printf( "\n bNumDescriptors        %d",     hidd->bNumDescriptors       );
  printf( "\n bReportDescriptorType  0x%02X", hidd->bReportDescriptorType );
  printf( "\n wDescriptorLength      %d\n",   hidd->wDescriptorLength     );

  /* Initialize device data structure, assume device has 1 endpoint. */
  USBH_InitDeviceData( &device, tmpBufHid, &ep, 1, USBH_GetPortSpeed() );

  USBH_SetAddressB( &device, KBD_USB_ADDRESS );
  USBH_SetConfigurationB( &device, device.confDesc.bConfigurationValue );

  /* Assign a Host Channel to the interrupt IN endpoint. */
  USBH_AssignHostChannel( &ep, KBD_INT_IN_HC );

  //HidSetIdle( 0, 0 );
  //HidSetProtocol();
}

/**************************************************************************//**
 * @brief
 *   Called each time the keyboard LED timer expires.
 *****************************************************************************/
void LedTimeout( void )
{
  ledTimerDone = true;
}

/**************************************************************************//**
 * @brief
 *   Called each time the keyboard interrupt IN endpoint should be checked.
 *****************************************************************************/
void PollTimeout( void )
{
  pollTimerDone = true;
}

