cmake_minimum_required(VERSION 3.6)
project(ex06)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Weapon.cpp Weapon.hpp HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp)
add_executable(ex06 ${SOURCE_FILES})