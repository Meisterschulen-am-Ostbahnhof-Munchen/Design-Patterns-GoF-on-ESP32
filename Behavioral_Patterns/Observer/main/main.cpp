#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

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
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    timer->Tick();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    timer->Tick();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    timer->Tick();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    timer->Tick();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    timer->Tick();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    timer->Tick();
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}
