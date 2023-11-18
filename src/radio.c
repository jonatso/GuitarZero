#include "radio.h"
#include "all_star.h"
#include "mini_midi.h"
#include "mini_midi_transfer.h"
#include "speaker_test_2.h"
#include "timer.h"

song_t *songs[] = {&all_star_song, &speaker_test_2_song};
int song_count = 1;
int playing = 0;
int active_song_index = 0;
int start_time = 0;

char *get_song_name(int index) { return songs[index]->name; }
void init_radio() { init_timer(); }

void play_song(int index) {
  playing = 1;
  active_song_index = index;
  start_time = get_time_in_milliseconds();
}

void stop() { playing = 0; }

void progress_radio() {
  if (playing == 1) {
    int current_time = get_time_in_milliseconds() - start_time;
    send_notes(*songs[active_song_index], current_time);
  }
}
