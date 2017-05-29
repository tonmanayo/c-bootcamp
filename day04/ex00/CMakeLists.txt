cmake_minimum_required(VERSION 3.7)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Sorcerer.cpp Sorcerer.hpp Victim.cpp Victim.hpp Peon.cpp Peon.hpp)
add_executable(ex00 ${SOURCE_FILES})