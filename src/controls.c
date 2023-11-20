#include "em_gpio.h"
#include "buttons.h"
#include "controls.h"


void read_button_inputs()
{
  for (int i = 1; i <= 5; i++)
    *(button_values[i]) |= button_pressed(i);
}

void reset_inputs_after_sixteenth()
{
  for (int i = 1; i <= 5; i++)
    *(button_values[i]) = 0;
  
}

/**
 * Sets is_failed_state according to played notes in this sixteenth
*/
void check_played_notes(int* sixteenth_notes)
{
  for (int i = 1; i <= 5; i++)
    if (sixteenth_notes[i] != *(button_values[i])) 
    {
        is_fail_state = 1;
        return;
    }

  is_fail_state = 0;
}

