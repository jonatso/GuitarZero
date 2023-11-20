#include "menu.h"
#include "radio.h"
#include "text_render.h"

int current_menu_index;
void set_menu_index(int new_index) {
  current_menu_index = new_index;
  set_text(get_song_name(current_menu_index));
}
void init_menu() { set_menu_index(0); }
void progress_menu() { draw_text(); }
