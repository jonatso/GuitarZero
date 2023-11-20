#include "radio.h"
#include "all_star.h"
#include "megalovania.h"
#include "mini_midi.h"
#include "mini_midi_transfer.h"
#include "speaker_test_2.h"
#include "through_the_fire_and_flames.h"
#include "timer.h"

song_t *songs[] = {&all_star_song, &speaker_test_2_song, &megalovania_song,
                   &through_the_fire_and_flames_song};
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

song_t get_song() { return *songs[active_song_index]; }

void stop() { playing = 0; }

int get_song_progress_milliseconds() {
  return get_time_in_milliseconds() - start_time;
}
int get_song_progress_sixteenths() {

  return progress_in_sixteenths(*songs[active_song_index],
                                get_song_progress_milliseconds());
}

void progress_radio() {
  if (playing == 1) {
    int current_time = get_song_progress_milliseconds();
    send_notes(*songs[active_song_index], current_time);
  }
}

int get_song_num(){
  return sizeof(songs)/sizeof(songs[0]);
}
