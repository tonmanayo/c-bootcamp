//
// Created by Tony MACK on 2017/05/23.
//

#include <sstream>
#include <iostream>
#include "Brain.hpp"

std::string Brain::identify() const{

	std::stringstream s;
	s << std::hex << this;

	return s.str();
}

Brain::Brain(){}

Brain::~Brain() {}


