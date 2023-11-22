/*
 * usb_hid.h
 *
 *  Created on: 20 Sept 2023
 *      Author: StianJSulebak
 */

#ifndef SRC_USB_HID_H_
#define SRC_USB_HID_H_

#include <stdio.h>
#include "em_device.h"
#include "em_cmu.h"
#include "em_usb.h"

int usb_hid( void );

void LedTimeout( void );
void PollTimeout( void );
bool CheckDevice( void );
void HidCheckKeyPress( void );
void InitHidDevice( void );

#endif /* SRC_USB_HID_H_ */
