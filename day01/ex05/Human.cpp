//
// Created by Tony MACK on 2017/05/23.
//

#include "Human.hpp"

std::string Human::identify() const {
	return brain.identify();
}

const Brain &Human::getBrain() const {
	return brain;
}
