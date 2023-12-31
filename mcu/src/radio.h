#ifndef RADIO
#define RADIO
#include "mini_midi.h"

char *get_song_name(int index);
void init_radio();

void play_song(int index);
void stop();
int get_song_progress_milliseconds();
int get_song_progress_sixteenths();
song_t get_song();

void progress_radio(int use_player_inputs);

int get_song_num();
int is_end_of_song();

#endif
