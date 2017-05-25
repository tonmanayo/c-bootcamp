cmake_minimum_required(VERSION 3.6)
project(ex00)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Fixed.cpp Fixed.hpp)
add_executable(ex00 ${SOURCE_FILES})