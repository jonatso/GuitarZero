/*
 * mini_midi_transfer.c
 *
 *  Created on: Oct 18, 2023
 *      Author: vetle
 */

#include "spi/spi_interface.c"
#include "mini_midi.h"

note_t *note_array[8];

void send_notes(song_t song, int progress_in_milliseconds)
{
  uint8_t buffer[24];

  uint8_t number_of_notes = get_sixteenth(song, progress_in_sixteenths)->number_of_notes;
  get_notes(song, progress_in_sixteenths, note_array);

  // Fill buffer
  for (int i = 0; i < 8; i++)
  {
    // If there is no note, set fields to 0
    if (i >= number_of_notes)
    {
      buffer[i * 3] = 0;
      buffer[i * 3 + 1] = 0;
      buffer[i * 3 + 2] = 0;
      continue;
    }
    // Set the note ([1 bit enable][7 bit tone])([1 byte amplitude])([1 byte instrument])
    buffer[i] = 1 << 7 | note_array[i]->tone;
    buffer[i + 1] = note_array[i]->amplitude;
    buffer[i + 2] = note_array[i]->instrument;
  }

  // Transmit data using a callback to catch transfer completion.
  spi_transfer_bytes_blocking(buffer, 3);
}
