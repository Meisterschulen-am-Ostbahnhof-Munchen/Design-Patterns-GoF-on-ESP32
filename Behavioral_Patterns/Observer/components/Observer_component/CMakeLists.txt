# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES )
set(COMPONENT_PRIV_REQUIRES 
	Foundation_Classes
	Iterator)

set(COMPONENT_SRCS 
    ClockTimer.cpp
    AnalogClock.cpp
    DigitalClock.cpp
    Subject.cpp)

set(COMPONENT_ADD_INCLUDEDIRS "" ".")

register_component()
