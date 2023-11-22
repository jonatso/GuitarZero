#include "em_gpio.h"
#include "buttons.h"
#include "controls.h"

int 
  button1 = 0,
  button2 = 0,
  button3 = 0,
  button4 = 0,
  button5 = 0,
  button6 = 0;

int *button_values[] = {&button1, &button2, &button3, &button4, &button5};

int is_fail_state = 0;

int get_fail_state() 
{
  return is_fail_state;
}

void read_button_inputs()
{
  for (int i = 0; i < 5; i++)
      *(button_values[i]) |= buttonPressed(i+1);
}

void reset_inputs_after_sixteenth()
{
  for (int i = 0; i < 5; i++)
    *(button_values[i]) = 0;
  
}

/**
 * Sets is_failed_state according to played notes in this sixteenth
*/
void check_played_notes(int* sixteenth_notes)
{
    
  for (int i = 0; i < 5; i++)
    // if a wrong note is played
    if (sixteenth_notes[i] != *(button_values[4-i])) // led matrix is reversed compared to buttons
    {
        is_fail_state = 1;
        return;
    }

  // only way to recover from failed note is to play a note correctly
  if (is_fail_state)
  {
    for (int i = 0; i < 5; i++)
    { 
      if (*(button_values[i]))
        is_fail_state = 0;
    }
  }
}

int** get_button_array()
{
  return button_values;
}


