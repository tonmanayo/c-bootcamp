cmake_minimum_required(VERSION 3.6)
project(ex05)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Brain.cpp
    Brain.hpp
    Human.cpp
    Human.hpp
    main.cpp)

add_executable(ex05 ${SOURCE_FILES})