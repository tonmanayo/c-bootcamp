//
// Created by tony on 2017/05/29.
//

#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
std::cout << "* teleports from space *\n";
}

void AssaultTerminator::battlecry() {
	std::cout << "“This code is unclean. PURIFY IT !\n";
}

void AssaultTerminator::rangedattack() {
 std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleattack() {
	std::cout << "* attacks with chainfists *\n";
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I'll be back!\n";
}
