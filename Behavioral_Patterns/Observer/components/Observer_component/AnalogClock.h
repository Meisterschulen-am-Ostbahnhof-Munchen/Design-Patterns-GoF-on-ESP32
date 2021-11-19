#ifndef ANALOG_CLOCK_H
#define ANALOG_CLOCK_H

#include "Widget.h"
#include "Observer.h"

class ClockTimer;
class Subject;

class AnalogClock : public Widget, public Observer {
public:
	AnalogClock(ClockTimer*);
    virtual ~AnalogClock();

    virtual void Update(Subject*);
        // overrides Observer operation

    virtual void Draw();
        // overrides Widget operation;
        // defines how to draw the digital clock
private:
    ClockTimer* _subject;
};


#endif /* ANALOG_CLOCK_H */
