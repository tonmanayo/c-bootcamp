//
// Created by tony on 2017/05/29.
//

#include <iostream>
#include "TacticalMarine.hpp"

TacticalMarine *TacticalMarine::clone():  {

//	rhs;
//	return *this;
	return new TacticalMarine();
}

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle\n";
}

void TacticalMarine::battlecry() {
	std::cout << "For the holy PLOT !\n";
}

void TacticalMarine::rangedattack() {
	std::cout << "* attacks with bolter *\n";
}

void TacticalMarine::meleattack() {
	std::cout << "* attacks with chainsword *\n";
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh...\n";
}
