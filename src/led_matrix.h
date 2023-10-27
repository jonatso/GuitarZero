#include "em_gpio.h"

#ifndef LED_MATRIX
#define LED_MATRIX

#define LED_MATRIX_HIGH 1
#define LED_MATRIX_LOW 0

#define LED_MATRIX_PIXEL_ON 1
#define LED_MATRIX_PIXEL_OFF 0

#define LED_MATRIX_WIDTH 8
#define LED_MATRIX_HEIGHT 8

extern const int LED_MATRIX_ROW_PORTS[];
extern const int LED_MATRIX_ROW_PINS[];

extern const int LED_MATRIX_COLUMN_PORTS[];
extern const int LED_MATRIX_COLUMN_PINS[];

void initLEDMatrix(void);
void clearPixels(void);
void displayPixels(void);
void setPixel(int, int, int);

#endif
