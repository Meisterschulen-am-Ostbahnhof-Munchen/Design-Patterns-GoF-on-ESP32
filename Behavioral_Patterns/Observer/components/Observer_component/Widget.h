#ifndef WIDGET_H
#define WIDGET_H

class Widget {
public:
	// Empty virtual destructor for proper cleanup
	virtual ~Widget() {}
    virtual void Draw() = 0;
};

#endif /* WIDGET_H */
