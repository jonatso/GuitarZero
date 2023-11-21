#include "led_matrix.h"
#include "mini_midi.h"

void render_level(song_t song, int progress_in_sixteenths) {
  clearPixels();
  for (int i = 0; i < LED_MATRIX_WIDTH; i++) {
    int progress = progress_in_sixteenths + i;
    if (progress >= song.length_in_measures * 16) {
      break;
    }

    sixteenth_t *sixteenth = get_sixteenth(song, progress);
    int number_of_notes = sixteenth->number_of_notes;
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
  displayPixels();
}
