// test-widget2.cpp
#include <string>
#include "testwidget2.h"

extern "C" Widget* factory(void) {
	return static_cast<Widget*>(new TestWidget2);
}

std::string TestWidget2::message(void) {
	return "Hello. I'm Test Widget2";
}
