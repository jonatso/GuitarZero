#ifndef TEXT_RENDER
#define TEXT_RENDER

int** render_text(char*);
char* char_to_bitmap(char);
int steps_needed_for_to_display_text(char *);
void draw_frame(int **rendered_text, char *text, int step);
void set_text(char *text);

void draw_text();
#endif
