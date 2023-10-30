/*
 * mini_midi.c
 *
 *  Created on: Oct 17, 2023
 *      Author: vetle
 */

#include "mini_midi.h"

int progress_in_sixteenths(song_t song, int progress_in_milliseconds)
{
  return (progress_in_milliseconds / (60 * 1000)) * (song.bpm * 4);
}

sixteenth_t *get_sixteenth(song_t song, int progress_in_sixteenths)
{
  return song.unique_sixteenths[song.sixteenth_indexes[progress_in_sixteenths]];
}

void get_notes(song_t song, int progress_in_sixteenths, note_t *note_array)
{
  sixteenth_t *sixteenth = get_sixteenth(song, progress_in_sixteenths);
  for (int i = 0; i < sixteenth->number_of_notes; i++)
  {
    note_array[i] = *song.unique_notes[sixteenth->note_indexes[i]];
  }
}
