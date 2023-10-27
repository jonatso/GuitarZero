#ifndef TEXT_RENDER
#define TEXT_RENDER

int** render_text(char*);
char* char_to_bitmap(char);
int steps_needed_for_to_display_text(char *, int);
void draw_frame(int **, char *, int, int, int **, int, int);
#endif
