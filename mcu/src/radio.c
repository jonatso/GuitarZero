#include "radio.h"
#include "bjornen_sover.h"
#include "controls.h"
#include "eye_of_the_tiger.h"
#include "kickstart_my_heart.h"
#include "megalovania.h"
#include "mini_midi.h"
#include "mini_midi_transfer.h"
#include "supermario.h"
#include "crockett.h"
//#include "through_the_fire_and_flames.h" This too big, it breaks
#include "timer.h"

song_t *songs[] = {&eye_of_the_tiger_song,   &bjornen_sover_song,
                   &kickstart_my_heart_song, &super_mario_song,
                   &megalovania_song, &crocetts_theme_song};

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
int is_end_of_song()
{
  return get_song_progress_sixteenths() >= get_song().length_in_measures * 16;
}

int prev_sixteenth = 0;
int notes_to_play[5];
void progress_radio(int use_player_inputs) {
  if (is_end_of_song()) stop();
  if (playing == 1) {
    int current_time = get_song_progress_milliseconds();
    int curr_sixteenth = get_song_progress_sixteenths();

    if (use_player_inputs) {
      read_button_inputs();

      // only update game-state when moving from one 16th to the next
      if (prev_sixteenth != curr_sixteenth) {
        get_notes_to_play(get_song(), curr_sixteenth, notes_to_play);
        check_played_notes(notes_to_play); // sets is_fail_state
        reset_inputs_after_sixteenth();
        prev_sixteenth = curr_sixteenth;
      }
    }

    send_notes(get_song(), current_time,
               !get_fail_state() || !use_player_inputs);
  }
}

int get_song_num() { return sizeof(songs) / sizeof(songs[0]); }
