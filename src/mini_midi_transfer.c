/*
 * mini_midi_transfer.c
 *
 *  Created on: Oct 18, 2023
 *      Author: vetle
 */

#include "spi/spi_interface.h"
#include "mini_midi.h"

note_t *note_array[MAX_SIMUL_NOTES];

void send_notes(song_t song, int progress_in_milliseconds)
{
  uint16_t buffer[MAX_SIMUL_NOTES];
  int progress_sixteenths = progress_in_sixteenths(song, progress_in_milliseconds);

  uint8_t number_of_notes = get_sixteenth(song, progress_sixteenths)->number_of_notes;
  get_notes(song, progress_sixteenths, note_array);

  // Fill buffer
  for (int i = 0; i < MAX_SIMUL_NOTES; i++)
  {
    // If there is no note, set fields to 0 (except amplitude)
    if (i >= number_of_notes || note_array[i]->instrument == 0)
    {
      uint16_t amplitude_mask = 0b0000000111111000;
      buffer[i] = buffer[i] & amplitude_mask;
      continue;
    }
    printf("Tone: %d\n", note_array[i]->tone);
    printf("Amplitude: %d\n", note_array[i]->amplitude);
    printf("Instrument: %d\n", note_array[i]->instrument);
    // Set the note ([7 bit tone])([6 bit amplitude])([3 bit instrument])
    uint16_t note = (0b1111111 & note_array[i]->tone);
    // we divide amplitude by 2 when sending (because we use 6 bits and midi has 7 bits)
    uint16_t amplitude = (0b111111 & (note_array[i]->amplitude >> 1));
    uint16_t instrument = (0b111 & note_array[i]->instrument);

    buffer[i] = (note << 9) | (amplitude << 3) | instrument;
    // buffer[i] = 0b1111111111111111;
    printf("To send: %d\n", buffer[i]);
    // Transmit data using a callback to catch transfer completion.

    // Yes, I know it's actually two bytes, but for some reason it doubles it (So inputting 2 sends 4)??
    spi_transfer_bytes_blocking(&(buffer[i]), 1);
  }
}
