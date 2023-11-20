#include "scene_manager.h"
#include "level_render.h"
#include "menu.h"
#include "radio.h"

scene current_scene = MENU;

void setScene(enum scene new_scene) { current_scene = new_scene; }

void progress_scene() {
  if (current_scene == LEVEL) {
    progress_radio();
    render_level(get_song(), get_song_progress_sixteenths());
  } else if (current_scene == MENU) {
    progress_menu();
  }
}
