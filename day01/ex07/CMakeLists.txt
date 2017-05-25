cmake_minimum_required(VERSION 3.6)
project(ex07)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ex07 ${SOURCE_FILES})