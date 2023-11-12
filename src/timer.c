#include "em_rtc.h"
#include <stdio.h>
#include "timer.h"

RTC_Init_TypeDef rtcInit = RTC_INIT_DEFAULT;

void init_timer()
{
    RTC_Init(&rtcInit);
}

int get_time_in_milliseconds()
{
    int time = RTC_CounterGet() / TICKS_PER_MILLISECOND;
    return time;
}