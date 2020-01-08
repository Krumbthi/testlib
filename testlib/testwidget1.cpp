// testwidget1.cpp
#include <string>
#include "testwidget1.h"

std::string TestWidget1::message(void) {
	return "Hello. I'm Test Widget1\nOh and the unique_signal is: " + std::to_string(unique_signal);
}

extern "C" Widget* factory(void) {
	return static_cast<Widget*>(new TestWidget1);
}