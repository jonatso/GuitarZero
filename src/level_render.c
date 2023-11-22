#include "led_matrix.h"
#include "mini_midi.h"
#include "controls.h"

void render_level(song_t song, int progress_in_sixteenths) {
  clearPixels();
  for (int i = 0; i < LED_MATRIX_WIDTH; i++) {
    int progress = progress_in_sixteenths + i;
    if (progress >= song.length_in_measures * 16) {
      break;
    }

    sixteenth_t *sixteenth = get_sixteenth(song, progress);
    int number_of_notes = sixteenth->number_of_notes;
    // If not in fail state, dont display bottom row of grid
    if (i == 0 && !get_fail_state()) continue;
    for (int j = 0; j < number_of_notes; j++)
    {
        note_t *note = song.unique_notes[sixteenth->note_indexes[j]];
        int row_to_display_on = note->user_played;
        if (row_to_display_on)
        {
            //frame[row_to_display_on][i] = LED_MATRIX_PIXEL_ON;
            setPixel(i, row_to_display_on - 1, LED_MATRIX_PIXEL_ON);
        }
    }
  }
  // Row displaying inputs
  int** button_arr = get_button_array();
  for (int k = 0; k < 5; k++)
  {
    if (*button_arr[4-k])
      setPixel(1, k, LED_MATRIX_PIXEL_OFF);
    else
      setPixel(1, k, LED_MATRIX_PIXEL_ON);
  }
  displayPixels();
}
