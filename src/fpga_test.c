#include "timer.h"
#include "mini_midi.h"
#include "mini_midi_transfer.h"
#include "all_star.h"

int start_time = 0;
void init_fpga_test()
{
    init_timer();
    start_time = get_time_in_milliseconds();
}

void progress_fpga_test()
{
    int current_time = get_time_in_milliseconds() - start_time;
    send_notes(song, current_time);
}