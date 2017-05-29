cmake_minimum_required(VERSION 3.7)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp ISquad.hpp Squad.cpp Squad.hpp ISpaceMarine.hpp TacticalMarine.cpp TacticalMarine.hpp AssaultTerminator.cpp AssaultTerminator.hpp)
add_executable(ex02 ${SOURCE_FILES})