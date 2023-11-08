#include "em_rtc.h"

void init_timer()
{
    RTC_Init(RTC_INIT_DEFAULT);
}

int get_time_in_milliseconds()
{
    // TODO: What value is this?
    return RTC_CounterGet();
}