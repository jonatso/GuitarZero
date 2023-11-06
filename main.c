/**************************************************************************//**
 * @file main.c
 * @brief USB host stack device enumeration example project.
 * @author Energy Micro AS
 * @version 3.20.0
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2010 Energy Micro AS, http://www.energymicro.com</b>
 ******************************************************************************
 *
 * This source code is the property of Energy Micro AS. The source and compiled
 * code may only be used on Energy Micro "EFM32" microcontrollers.
 *
 * This copyright notice may not be removed from the source code nor changed.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Energy Micro AS has no
 * obligation to support this Software. Energy Micro AS is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Energy Micro AS will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 *****************************************************************************/
/*  SYSTEM  */
#define _DEBUG_GECKO true
#include "sl_component_catalog.h"
#include "sl_system_init.h"
#include "app.h"
#include "sl_system_process_action.h"
#include <stdio.h>
#include "em_cmu.h"

/* src files */
#include "src/usb_enum.h"
#include "src/usb_hid.h"
#include "src/spi/spi_interface.h"

//*#include "SegmentLCD.h"

/**************************************************************************//**
 *
 * This example shows how the USB host stack can be used to "probe" the device
 * properties of any device which is attached to the host port.
 *
 * The device attached will not be configured.
 *
 *****************************************************************************/

/*** Variables ***/


/**************************************************************************//**
 * @brief main - the entrypoint after reset.
 *****************************************************************************/
int main(void)
{
  // Initialize Silicon Labs device, system, service(s) and protocol stack(s).
    // Note that if the kernel is present, processing task(s) will be created by
    // this call.
    sl_system_init();
    app_init();
    printf("Testing debug printf\n");

    unsigned long mask = 0;
    unsigned long buffer = ~mask;
    printf("spi buff: %ld", buffer);

    while (1) {

      // Do not remove this call: Silicon Labs components process action routine
      // must be called from the super loop.
      sl_system_process_action();


      spi_transfer_bytes_blocking(&buffer, sizeof(long));
      /*
      // Application process.
      app_process_action(); */

    }
    
}
