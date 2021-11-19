#include <stdio.h>
#include "sdkconfig.h"

#include "ClockTimer.h"
#include "AnalogClock.h"
#include "DigitalClock.h"

/* Inside .cpp file, app_main function must be declared with C linkage */
extern "C" void app_main(void)
{
    printf("Hello world!\n");

    ClockTimer*   timer        = new ClockTimer;
    AnalogClock*  analogClock  = new AnalogClock(timer);
    DigitalClock* digitalClock = new DigitalClock(timer);
}
