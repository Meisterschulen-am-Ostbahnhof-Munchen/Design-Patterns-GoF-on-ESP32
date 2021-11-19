# Edit following two lines to set component requirements (see docs)
set(COMPONENT_REQUIRES )
set(COMPONENT_PRIV_REQUIRES 
   Iterator)

set(COMPONENT_SRCS 
    Coord.cpp
    Point.cpp
    Rect.cpp)

set(COMPONENT_ADD_INCLUDEDIRS "" ".")

register_component()