/*
 * led_matrix.c
 *
 *  Created on: Sep 26, 2023
 *      Author: Vetle
 */
#include "em_gpio.h"
#include "led_matrix.h"

const int LED_MATRIX_ROW_PORTS[] = {gpioPortC, gpioPortC, gpioPortC, gpioPortC, gpioPortC, gpioPortC, gpioPortC, gpioPortC};
const int LED_MATRIX_ROW_PINS[] = {0, 1, 2, 3, 4, 5, 6, 7};

const int LED_MATRIX_COLUMN_PORTS[] = {gpioPortD, gpioPortD, gpioPortD, gpioPortD, gpioPortD, gpioPortD, gpioPortD, gpioPortD};
const int LED_MATRIX_COLUMN_PINS[] = {0, 1, 2, 3, 4, 5, 6, 7};

int pixels[LED_MATRIX_HEIGHT][LED_MATRIX_WIDTH];

void initLEDMatrix(void)
{
  for (int i = 0; i < LED_MATRIX_WIDTH; i++) {
      GPIO_PinModeSet(LED_MATRIX_COLUMN_PORTS[i], LED_MATRIX_COLUMN_PINS[i], gpioModePushPull, LED_MATRIX_HIGH);
  }

  for (int i = 0; i < LED_MATRIX_HEIGHT; i++) {
        GPIO_PinModeSet(LED_MATRIX_ROW_PORTS[i], LED_MATRIX_ROW_PINS[i], gpioModePushPull, LED_MATRIX_LOW);
  }

  clearPixels();
}

void clearPixels(void)
{
  for (int x = 0; x < LED_MATRIX_WIDTH; x++) {
      for (int y = 0; y < LED_MATRIX_HEIGHT; y++) {
          setPixel(x, y, LED_MATRIX_PIXEL_OFF);
      }
  }
}

void displayPixels(void)
{
   for (int y = 0; y < LED_MATRIX_HEIGHT; y++) {
     // Turn on a row
     GPIO_PinOutSet(LED_MATRIX_ROW_PORTS[y], LED_MATRIX_ROW_PINS[y]);
     for (int x = 0; x < LED_MATRIX_WIDTH; x++) {
       // Turn every pixel that should light up on and back off (By setting the col pin to LOW and HIGH)
       if (pixels[y][x] == LED_MATRIX_PIXEL_ON){
           GPIO_PinOutClear(LED_MATRIX_COLUMN_PORTS[x], LED_MATRIX_COLUMN_PINS[x]);
           GPIO_PinOutSet(LED_MATRIX_COLUMN_PORTS[x], LED_MATRIX_COLUMN_PINS[x]);
       }
     }
     // Turn off the row
     GPIO_PinOutClear(LED_MATRIX_ROW_PORTS[y], LED_MATRIX_ROW_PINS[y]);
   }
}

void setPixel(int x, int y, int value) {
  pixels[y][x] = value;
}

