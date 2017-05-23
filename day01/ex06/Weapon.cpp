//
// Created by Tony MACK on 2017/05/23.
//

#include "Weapon.hpp"

const std::string &Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string type) {
	Weapon::type = type;
}

Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon() {}
