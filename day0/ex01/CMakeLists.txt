cmake_minimum_required(VERSION 3.6)
project(ex01)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Contact.class.cpp Contact.class.hpp)
add_executable(ex01 ${SOURCE_FILES})