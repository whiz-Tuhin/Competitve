cmake_minimum_required(VERSION 3.5)
project(Solutions)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp redundant_braces.cpp)
add_executable(Solutions ${SOURCE_FILES})