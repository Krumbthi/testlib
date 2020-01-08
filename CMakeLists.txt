cmake_minimum_required(VERSION 3.5)

project(testapp LANGUAGES CXX)

# Add sub directories
add_subdirectory(testlib)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_EXAMPLE_APIVERSION "0.1.1")
set(CMAKE_EXAMPLE_VERSION "0.1.1")
set(CMAKE_EXAMPLE_SOVERSION "1")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add an executable with the above sources
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} TestWidget2::library ${CMAKE_DL_LIBS})
