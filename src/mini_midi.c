/*
 * mini_midi.c
 *
 *  Created on: Oct 17, 2023
 *      Author: vetle
 */

#include "mini_midi.h"
#include <stdio.h>

int progress_in_sixteenths(song_t song, int progress_in_milliseconds) {
  printf("porgress in mills: %d\n", progress_in_milliseconds);
  printf("bpm: %d\n", song.bpm);
  int sixteenths = (int)(((float)progress_in_milliseconds / (60.0 * 1000.0)) *
                         ((float)song.bpm * 4.0));
  printf("sixteents: %d\n", sixteenths);
  return sixteenths;
}

sixteenth_t *get_sixteenth(song_t song, int progress_in_sixteenths) {
  return song.unique_sixteenths[song.sixteenth_indexes[progress_in_sixteenths]];
}

void get_notes(song_t song, int progress_in_sixteenths, note_t **note_array) {
  sixteenth_t *sixteenth = get_sixteenth(song, progress_in_sixteenths);
  for (int i = 0; i < MAX_SIMUL_NOTES; i++) {
    if (i < sixteenth->number_of_notes)
      note_array[i] = song.unique_notes[sixteenth->note_indexes[i]];
    else
      note_array[i] = 0;
  }
}
