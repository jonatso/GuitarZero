/*
 * mini_midi.h
 *
 * A format to save a song, functions to serialize and deserialize and read what should be played at a given time
 *
 *  Created on: Oct 17, 2023
 *      Author: vetle
 */

#ifndef SRC_MINI_MIDI_H_
#define SRC_MINI_MIDI_H_
#include <stdint.h>

#define MAX_SIMUL_NOTES 5

struct Note
{
  uint8_t amplitude;
  uint8_t instrument; // Can probably be optimized to use 3-4 bits, but for now it's not worth the effort
  uint8_t tone;
  uint8_t user_played;
};
typedef struct Note note_t;

struct Sixteenth
{
  uint8_t number_of_notes;
  uint16_t *note_indexes;
};

typedef struct Sixteenth sixteenth_t;

struct Song
{
  uint8_t bpm;
  uint8_t length_in_measures; // A measure is 16 sixteenths
  uint16_t number_of_unique_sixteenths;
  uint16_t number_of_unique_notes;
  uint16_t *sixteenth_indexes; // We save a lot of space if we are able to cut this to a uint8_t, and only use 256 unique sixteenths
  sixteenth_t **unique_sixteenths;
  note_t **unique_notes;
};

typedef struct Song song_t;

int progress_in_sixteenths(song_t song, int progress_in_milliseconds);

sixteenth_t *get_sixteenth(song_t song, int progress_in_sixteenths);

void get_notes(song_t song, int progress_in_sixteenths, note_t **note_array);

#endif /* SRC_MINI_MIDI_H_ */
