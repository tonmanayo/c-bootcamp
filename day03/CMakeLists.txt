cmake_minimum_required(VERSION 3.6)
project(day03)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    ex00/FragTrap.cpp
    ex00/FragTrap.hpp
    ex00/main.cpp
    ex01/FragTrap.cpp
    ex01/FragTrap.hpp
    ex01/main.cpp
    ex01/ScavTrap.cpp
    ex01/ScavTrap.hpp
    ex02/ClapTrap.cpp
    ex02/ClapTrap.hpp
    ex02/FragTrap.cpp
    ex02/FragTrap.hpp
    ex02/main.cpp
    ex02/ScavTrap.cpp
    ex02/ScavTrap.hpp
		ex03/NinjaTrap.cpp
    ex03/NinjaTrap.hpp
		ex03/FragTrap.cpp
		ex03/ClapTrap.cpp
		ex03/ScavTrap.cpp
		ex03/main.cpp

		ex04/SuperTrap.cpp ex04/SuperTrap.hpp
		ex04/NinjaTrap.cpp
		ex04/FragTrap.cpp
		ex04/ClapTrap.cpp
		ex04/ScavTrap.cpp
		ex04/main.cpp)


add_executable(day03 ${SOURCE_FILES})