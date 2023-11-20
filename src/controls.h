int 
  button1 = 0,
  button2 = 0,
  button3 = 0,
  button4 = 0,
  button5 = 0,
  button6 = 0;

int *button_values[] = {&button1, &button2, &button3, &button4, &button5};

int is_fail_state = 0;


void read_button_inputs();

void reset_inputs_after_sixteenth();

/**
 * Sets is_failed_state according to played notes in this sixteenth
*/
void check_played_notes(int *sixteenth_notes);