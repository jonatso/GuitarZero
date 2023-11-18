/*
 * mini_midi_transfer.c
 *
 *  Created on: Oct 18, 2023
 *      Author: vetle
 */

#include "mini_midi.h"
#include "spi/spi_interface.h"
#include <stdio.h>

note_t *note_array[MAX_SIMUL_NOTES];
note_t *prev_notes[MAX_SIMUL_NOTES];
int included[MAX_SIMUL_NOTES];
int reserved[MAX_SIMUL_NOTES];

/*
 *
 * Swap positons of notes such that for two following sendings the
 * same note will be in the same position
 * WARNING: This will mutate the prev_notes array to save memory
 *
 */
void reorder_note_array(note_t **note_array, note_t **prev_notes, int *included,
                        int *reserved) {
  // Reset notes included and reserved
  for (int i = 0; i < MAX_SIMUL_NOTES; i++) {
    included[i] = 0;
    reserved[i] = 0;
  }
  // First mark all notes that are in both arrays
  for (int i = 0; i < MAX_SIMUL_NOTES; i++) {
    for (int j = 0; j < MAX_SIMUL_NOTES; j++) {
      if (prev_notes[i] == note_array[j] && prev_notes[i] != 0) {
        included[j] = 1;
        reserved[i] = 1;
        break;
      }
    }
  }
  // Replace all non-reserved spots for non-included notes
  for (int i = 0; i < MAX_SIMUL_NOTES; i++) {
    if (reserved[i] == 1) {
      continue;
    }
    for (int j = 0; j < MAX_SIMUL_NOTES; j++) {
      if (included[j] != 1) {
        prev_notes[i] = note_array[j];
        included[j] = 1;
        break;
      }
    }
  }
  // Set the note array values
  for (int i = 0; i < MAX_SIMUL_NOTES; i++) {
    note_array[i] = prev_notes[i];
  }
}

void send_notes(song_t song, int progress_in_milliseconds) {
  printf("----------");
  uint16_t buffer[MAX_SIMUL_NOTES];
  int progress_sixteenths =
      progress_in_sixteenths(song, progress_in_milliseconds);

  // Send an empty array if song has progressed past end
  if (progress_sixteenths > song.length_in_measures * 16) {
    printf("No notes\n");
    for (int i = 0; i < MAX_SIMUL_NOTES; i++) {
      buffer[i] = 0;
      spi_transfer_bytes_blocking(&(buffer[i]), 1);
      return;
    }
  }

  // Get notes
  uint8_t number_of_notes =
      get_sixteenth(song, progress_sixteenths)->number_of_notes;
  get_notes(song, progress_sixteenths, note_array);

  if (progress_sixteenths > 0) {
  }

  // Fill buffer
  for (int i = 0; i < MAX_SIMUL_NOTES; i++) {
    // If there is no note, set fields to 0 (except amplitude)
    if (note_array[i] == 0) {
      uint16_t amplitude_mask = 0b0000000111111000;
      buffer[i] = buffer[i] & amplitude_mask;
      printf("empty");
      spi_transfer_bytes_blocking(&(buffer[i]), 1);
      continue;
    }
    printf("Tone: %d\n", note_array[i]->tone);
    printf("Amplitude: %d\n", note_array[i]->amplitude);
    printf("Instrument: %d\n", note_array[i]->instrument);
    // Set the note ([7 bit tone])([6 bit amplitude])([3 bit instrument])
    uint16_t note = (0b1111111 & note_array[i]->tone);
    // we divide amplitude by 2 when sending (because we use 6 bits and midi
    // has 7 bits)
    uint16_t amplitude = (0b111111 & (note_array[i]->amplitude >> 1));
    uint16_t instrument = (0b111 & note_array[i]->instrument);

    buffer[i] = (note << 9) | (amplitude << 3) | instrument;
    // buffer[i] = 0b1111111111111111;
    printf("To send: %d\n", buffer[i]);
    // Transmit data using a callback to catch transfer completion.

    // Yes, I know it's actually two bytes, but for some reason it doubles it
    // (So inputting 2 sends 4)??
    spi_transfer_bytes_blocking(&(buffer[i]), 1);
  }
}
