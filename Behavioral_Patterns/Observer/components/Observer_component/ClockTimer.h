#ifndef CLOCK_TIMER_H
#define CLOCK_TIMER_H

#include "Subject.h"

class ClockTimer : public Subject{
public:
	// Empty virtual destructor for proper cleanup
	virtual ~ClockTimer() {}

    ClockTimer();

    int GetHour();
    int GetMinute();
    int GetSecond();

    void Tick();
private:
    int hour;
    int minute;
    int second;
};

#endif /* CLOCK_TIMER_H */
