//
// Created by Tony MACK on 2017/05/23.
//

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(const std::string &type, const std::string &name) : type(type), name(name) {}

Zombie::~Zombie() {

}

const std::string &Zombie::getType() const {
	return type;
}

void Zombie::setType(const std::string &type) {
	Zombie::type = type;
}

const std::string &Zombie::getName() const {
	return name;
}

void Zombie::setName(const std::string &name) {
	Zombie::name = name;
}

void Zombie::announce(){
	std::cout << this->name << "(" << this->type << ")"  << "screaming lots of words\n";
}