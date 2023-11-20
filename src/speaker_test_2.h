#include "mini_midi.h" 

// Notes
note_t speaker_test_2_note0 = {
  64,
  3,
  79,
  0
};
note_t speaker_test_2_note1 = {
  64,
  3,
  76,
  0
};
note_t speaker_test_2_note2 = {
  64,
  3,
  72,
  0
};
note_t* speaker_test_2_unique_notes[] = {&speaker_test_2_note0,&speaker_test_2_note1,&speaker_test_2_note2};
// Sixteenths
sixteenth_t speaker_test_2_sixteenth0 = {
  3,
  (uint16_t[]){0,1,2}
};
sixteenth_t* speaker_test_2_unique_sixteenths[] = {&speaker_test_2_sixteenth0};
// Song
uint16_t speaker_test_2_sixteenth_indexes[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
song_t speaker_test_2_song = {
  "SPEAKER TEST 2",
  108.000108000108,
  7,
  1,
  3,
  speaker_test_2_sixteenth_indexes,
  speaker_test_2_unique_sixteenths,
  speaker_test_2_unique_notes
};
