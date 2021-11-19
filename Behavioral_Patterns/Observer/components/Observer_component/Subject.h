#ifndef SUBJECT_H
#define SUBJECT_H

#include "List.h"

class Observer;

class Subject {
public:
	// Empty virtual destructor for proper cleanup
	virtual ~Subject() {}

    virtual void Attach(Observer*);
    virtual void Detach(Observer*);
    virtual void Notify();
    Subject():_observers(){};
private:
    List<Observer*> *_observers;
};

#endif /* SUBJECT_H */
