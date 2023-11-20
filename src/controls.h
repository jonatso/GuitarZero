#ifndef CONTROLS_H

#define CONTROLS_H


int get_fail_state();

void read_button_inputs();

void reset_inputs_after_sixteenth();

/**
 * Sets is_failed_state according to played notes in this sixteenth
*/
void check_played_notes(int *sixteenth_notes);


#endif // CONTROLS_H