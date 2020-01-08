cmake_minimum_required(VERSION 3.5)

# project(testLib LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXAMPLE_APIVERSION "0.1.1")
set(CMAKE_EXAMPLE_VERSION "0.1.1")
set(CMAKE_EXAMPLE_SOVERSION "1")

set(SOURCES2 testwidget2.cpp)
set(SOURCES1 testwidget1.cpp)

add_library(widget2 SHARED ${SOURCES2})
add_library(TestWidget2::library ALIAS widget2)
SET_TARGET_PROPERTIES(
    widget2 PROPERTIES
    OUTPUT_NAME widget2
    PUBLIC_HEADER "widget.h"
)
target_include_directories(widget2 PUBLIC ${PROJECT_SOURCE_DIR})

add_library(widget1 SHARED ${SOURCES1})
add_library(TestWidget1::library ALIAS widget1)
SET_TARGET_PROPERTIES(
    widget1 PROPERTIES
    OUTPUT_NAME widget1
    PUBLIC_HEADER "widget.h"
)
target_include_directories(widget1 PUBLIC ${PROJECT_SOURCE_DIR})

#SET_TARGET_PROPERTIES(
#    widget2 PROPERTIES
#    OUTPUT_NAME widget2-${CMAKE_EXAMPLE_APIVERSION}
#    VERSION ${CMAKE_EXAMPLE_VERSION}
#    SOVERSION ${CMAKE_EXAMPLE_SOVERSION}
#    PUBLIC_HEADER "widget.h"
#)

# g++ --std=c++17 -fPIC -rdynamic -shared -o ./test-widget1.so ./test-widget1.cpp
# g++ --std=c++17 -fPIC -rdynamic -shared -o ./test-widget2.so ./test-widget2.cpp