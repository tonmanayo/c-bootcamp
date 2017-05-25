//
// Created by Tony MACK on 2017/05/23.
//

#include <iostream>
#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << this->name << " Attacks with his Weapon " << this->weapon.type << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {

}

const std::string &HumanA::getName() const {
	return name;
}

void HumanA::setName(const std::string &name) {
	HumanA::name = name;
}

Weapon HumanA::getWeapon() const {
	return weapon;
}





