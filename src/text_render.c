#include "font.h"
#include "text_render.h"
#include "led_matrix.h"
#include "string.h"
#include "stdlib.h"

char* char_to_bitmap(char c) {
  for (int i = 0; i < sizeof(symbols)/sizeof(char);i++) {
      if (symbols[i] == c) {
          return bitmaps[i];
      }
  }
  return -1;
}

/*
 * Renders the given text to a 2D array, where each cell corresponds to a LED that is on or off.
 * The size of the array will be 5 pixels tall, and width fitted to the text length (5 pixels per character + 1 pixel margin between characters)
 */
int **render_text(char *text)
{
    int ROW_COUNT = 5;
    int COL_COUNT = 6 * strlen(text) - 1;
    int **rendered = malloc(ROW_COUNT * sizeof(int *));
    for (int i = 0; i < ROW_COUNT; i++)
    {
        rendered[i] = malloc(COL_COUNT * sizeof(int));
    }
    // i = index of current character
    for (int i = 0; i < strlen(text); i++)
    {
        char *bitmap = char_to_bitmap(text[i]);

        // y = index of current row of current character
        for (int y = 0; y < 5; y++)
        {
            char row;
            if (bitmap != -1)
                row = bitmap[y];

            // x = index of current column of current character
            for (int x = 0; x < 5; x++)
            {
                int render_x = i * 6 + x; // The x location of the final rendered cell

                if (bitmap != -1)
                {

                    // Check if the current cell is "on" and set rendered pixel accordingly
                    if ((row >> (4 - x)) & 1)
                    {
                        rendered[y][render_x] = LED_MATRIX_PIXEL_ON;
                    }
                    else
                    {
                        rendered[y][render_x] = LED_MATRIX_PIXEL_OFF;
                    }
                }
                else
                {
                    rendered[y][render_x] = LED_MATRIX_PIXEL_OFF;
                }
            }
        }
    }
    return rendered;
}

/*
 * How many steps the screen needs to scroll to display the full text
 */

int steps_needed_for_to_display_text(char *text, int display_width)
{
    return strlen(text) * 6 - display_width;
}

/*
 * Fill frame with rendered text, translated according to step (Step 0 will display start of text)
 * The frame size must be in accordance to the width and the height of the display
 * The off value is the value to fill empty space with
 */
void draw_frame(int **rendered_text, char *text, int display_width, int display_height, int **frame, int step, int off_value)
{
    // the overstepping variable is to handle when the text scrolls further than it's length
    int overstepping = step - steps_needed_for_to_display_text(text, display_width);
    overstepping = overstepping > 0 ? overstepping : 0;

    for (int y = 0; y < display_height; y++)
    {

        for (int x = 0; x < display_width; x++)
        {
            if (x > display_width - overstepping)
            {
                frame[y][x] = off_value;
            }
            else
            {
                frame[y][x] = rendered_text[y][x + step];
            }
        }
    }
}
