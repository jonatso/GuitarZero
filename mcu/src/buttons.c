/*
 * buttons.c
 *
 *  Created on: 18. nov. 2023
 *      Author: aslak
 */

#include "buttons.h"
#include "em_gpio.h"




void initButtons()
{
  GPIO_PinModeSet(gpioPortC, 1, gpioModeInputPull, 0);
  GPIO_PinModeSet(gpioPortC, 2, gpioModeInputPull, 0);
  GPIO_PinModeSet(gpioPortC, 3, gpioModeInputPull, 0);
  GPIO_PinModeSet(gpioPortC, 4, gpioModeInputPull, 0);
  GPIO_PinModeSet(gpioPortC, 5, gpioModeInputPull, 0);
  GPIO_PinModeSet(gpioPortB, 7, gpioModeInputPull, 0);
}

int buttonPressed(int sw){
  int port;
  int pin;
  if (sw == 1){port = gpioPortC; pin = 1;}
  if (sw == 2){port = gpioPortC; pin = 2;}
  if (sw == 3){port = gpioPortC; pin = 3;}
  if (sw == 4){port = gpioPortC; pin = 4;}
  if (sw == 5){port = gpioPortC; pin = 5;}
  if (sw == 6){port = gpioPortB; pin = 7;}

  return GPIO_PinInGet(port, pin);
}

int anyPressed(){
  for (int i = 0; i < 6; i++){
      if (buttonPressed(i)){
          return 1;
      }
  }
  return 0;
}



