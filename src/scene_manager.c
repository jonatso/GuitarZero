#include "scene_manager.h"
#include "level_render.h"
#include "menu.h"
#include "radio.h"
#include "buttons.h"
#include "text_render.h"
#include "mini_midi_transfer.h"

void delay(int count) {
    for (volatile int i = 0; i < count; i++) {
        // Delay
    }
}

enum scene current_scene = MENU;

void setScene(enum scene new_scene) { current_scene = new_scene; }

void progress_scene() {
  switch (current_scene){
    case LEVEL:
      progress_radio(1);
      render_level(get_song(), get_song_progress_sixteenths());

      if (buttonPressed(6)){
          delay(1000000);
          setScene(MENU);
          stop();
          send_empty();
      }

      break;

    case MENU:
      progress_menu();
      progress_radio(0);
      if (buttonPressed(1)){
          delay(1000000);
          prev_menu();
      }
      if (buttonPressed(2)){
          delay(1000000);
          next_menu();
      }
      if (buttonPressed(6)){
          delay(1000000);
          play_song(get_current_index());
          setScene(LEVEL);
      }
      break;
  }
}
