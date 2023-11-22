/*
 * led_matrix.c
 *
 *  Created on: Sep 26, 2023
 *      Author: Vetle
 */
#include "led_matrix.h"
#include "em_gpio.h"

const int LED_MATRIX_ROW_PORTS[] = {gpioPortA, gpioPortB, gpioPortA, gpioPortB,
                                    gpioPortA};
const int LED_MATRIX_ROW_PINS[] = {8, 8, 9, 11, 10};

const int LED_MATRIX_COLUMN_PORTS[] = {
    gpioPortA, gpioPortC, gpioPortA, gpioPortA, gpioPortA,
    gpioPortA, gpioPortA, gpioPortE, gpioPortE, gpioPortE,
    gpioPortE, gpioPortE, gpioPortE, gpioPortE};
const int LED_MATRIX_COLUMN_PINS[] = {5,0,4,3,2,0,1,14,15,13,11,9,12,10};

int pixels[LED_MATRIX_HEIGHT][LED_MATRIX_WIDTH];

void initLEDMatrix(void) {
  for (int i = 0; i < LED_MATRIX_WIDTH; i++) {
    GPIO_PinModeSet(LED_MATRIX_COLUMN_PORTS[i], LED_MATRIX_COLUMN_PINS[i],
                    gpioModePushPull, LED_MATRIX_HIGH);
  }

  for (int i = 0; i < LED_MATRIX_HEIGHT; i++) {
    GPIO_PinModeSet(LED_MATRIX_ROW_PORTS[i], LED_MATRIX_ROW_PINS[i],
                    gpioModePushPull, LED_MATRIX_LOW);
  }

  clearPixels();
}

void clearPixels(void) {
  for (int x = 0; x < LED_MATRIX_WIDTH; x++) {
    for (int y = 0; y < LED_MATRIX_HEIGHT; y++) {
      setPixel(x, y, LED_MATRIX_PIXEL_OFF);
    }
  }
}

void displayPixels(void) {
  for (int y = 0; y < LED_MATRIX_HEIGHT; y++) {
    // Turn on a row
    GPIO_PinOutSet(LED_MATRIX_ROW_PORTS[y], LED_MATRIX_ROW_PINS[y]);
    for (int x = 0; x < LED_MATRIX_WIDTH; x++) {
      // Turn every pixel that should light up on and back off (By setting the
      // col pin to LOW and HIGH)
      if (pixels[y][x] == LED_MATRIX_PIXEL_ON) {
        GPIO_PinOutClear(LED_MATRIX_COLUMN_PORTS[x], LED_MATRIX_COLUMN_PINS[x]);
        GPIO_PinOutSet(LED_MATRIX_COLUMN_PORTS[x], LED_MATRIX_COLUMN_PINS[x]);
      }
    }
    // Turn off the row
    GPIO_PinOutClear(LED_MATRIX_ROW_PORTS[y], LED_MATRIX_ROW_PINS[y]);
  }
}

void setPixel(int x, int y, int value) { pixels[y][x] = value; }
