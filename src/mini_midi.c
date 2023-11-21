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

/**
 * Expects a 5 long array, gets notes that should be played
 * by the player this 16th
 * Maps what is displayed on the bottom of the led matrix
 * ex [0, 0, 0, 1, 1]
*/
void get_notes_to_play(song_t song, int progress_in_sixteenths, int* note_list)
{
  for (int i = 0; i < 5; i++)
    note_list[i] = 0;

  sixteenth_t *sixteenth = get_sixteenth(song, progress_in_sixteenths);
  int number_of_notes = sixteenth->number_of_notes;
  for (int i = 0; i < number_of_notes; i++)
  {
      note_t *note = song.unique_notes[sixteenth->note_indexes[i]];
      int row_to_display_on = note->user_played;
      if (row_to_display_on)
      {
        note_list[row_to_display_on - 1] = 1;
      } 
  }
}