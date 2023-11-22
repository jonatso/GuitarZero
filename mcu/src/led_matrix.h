#include "em_gpio.h"

#ifndef LED_MATRIX
#define LED_MATRIX

#define LED_MATRIX_HIGH 1
#define LED_MATRIX_LOW 0

#define LED_MATRIX_PIXEL_ON 1
#define LED_MATRIX_PIXEL_OFF 0

#define LED_MATRIX_WIDTH 14
#define LED_MATRIX_HEIGHT 5

extern const int LED_MATRIX_ROW_PORTS[];
extern const int LED_MATRIX_ROW_PINS[];

extern const int LED_MATRIX_COLUMN_PORTS[];
extern const int LED_MATRIX_COLUMN_PINS[];

extern int pixels[LED_MATRIX_HEIGHT][LED_MATRIX_WIDTH];

void initLEDMatrix(void);
void clearPixels(void);
void displayPixels(void);
void setPixel(int, int, int);

#endif
