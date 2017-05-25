//
// Created by Tony MACK on 2017/05/23.
//

#include <iostream>
#include "HumanB.hpp"





HumanB::~HumanB() {

}

void HumanB::attack() {
	std::cout << this->name << "Attacks with his Weapon" << this->weapon->type << std::endl;

}



const Weapon &HumanB::getWeapon() const {
	return *weapon;
}

void HumanB::setWeapon(Weapon &weapon) {
	HumanB::weapon = &weapon;
}


const std::string &HumanB::getName() const {
	return name;
}

void HumanB::setName(const std::string &name) {
	HumanB::name = name;
}

HumanB::HumanB(const std::string &name) : name(name) {}



