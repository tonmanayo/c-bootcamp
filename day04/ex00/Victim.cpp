//
// Created by tony on 2017/05/29.
//

#include <iostream>
#include "Victim.hpp"

Victim::Victim(const std::string &_name) : _name(_name) {
	std::cout << "Some random victim called " << _name << " just popped !\n";
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason !\n";
}

Victim::Victim() {}

const std::string &Victim::get_name() const {
	return _name;
}

Victim &Victim::operator=(Victim const &rhs) {
	this->_name = rhs.get_name();
	return *this;
}

void Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep !\n";
}

std::ostream    &operator<<(std::ostream & o, Victim const & rhs){
	std::cout <<"I'm " << rhs.get_name() << " and I like otters !\n";
}


