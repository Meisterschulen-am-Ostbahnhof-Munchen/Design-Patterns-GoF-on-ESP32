#include "ClockTimer.h"

ClockTimer::ClockTimer() {
	hour = 16;
	minute = 5;
	second = 1;
}

void ClockTimer::Tick () {
    // update internal time-keeping state
    // ...
	minute++;
    Notify();
}

int ClockTimer::GetHour() {
	return hour;
}

int ClockTimer::GetMinute() {
	return minute;
}

int ClockTimer::GetSecond() {
	return second;
}
