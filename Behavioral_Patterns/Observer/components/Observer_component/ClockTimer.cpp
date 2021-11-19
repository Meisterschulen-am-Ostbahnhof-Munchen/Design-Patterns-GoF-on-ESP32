#include "ClockTimer.h"

ClockTimer::ClockTimer() {
}

void ClockTimer::Tick () {
    // update internal time-keeping state
    // ...
    Notify();
}

int ClockTimer::GetHour() {
	return 5;
}

int ClockTimer::GetMinute() {
	return 5;
}

int ClockTimer::GetSecond() {
	return 5;
}
