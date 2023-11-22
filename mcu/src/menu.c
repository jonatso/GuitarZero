#include "menu.h"
#include "radio.h"
#include "text_render.h"

int current_menu_index;
void set_menu_index(int new_index) {
  current_menu_index = new_index;
  set_text(get_song_name(current_menu_index));

}
int get_current_index(){
  return current_menu_index;
}

void next_menu(){
  if (current_menu_index >= get_song_num()-1){
      set_menu_index(0);
  }
  else{
      set_menu_index(current_menu_index+1);
  }
  play_song(current_menu_index);
}

void prev_menu(){
  if (current_menu_index <= 0){
      set_menu_index(get_song_num()-1);
  }
  else{
      set_menu_index(current_menu_index-1);
  }
  play_song(current_menu_index);
}

void init_menu() { set_menu_index(0); }
void progress_menu() { draw_text(); }
