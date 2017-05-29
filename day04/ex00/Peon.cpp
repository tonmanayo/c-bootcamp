//
// Created by tony on 2017/05/29.
//

#include <iostream>
#include "Peon.hpp"

Peon::Peon(void) {

}

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog zog.\n";
}

Peon::~Peon(void) {
std::cout << "Bleuark...\n";
}

void Peon::getPolymorphed(void) const {
	std::cout << get_name() << " has turned into a pink pony!\n";
}

Peon &Peon::operator=(Peon const &rhs) {
	this->_name = rhs.get_name();

	return *this;
}
