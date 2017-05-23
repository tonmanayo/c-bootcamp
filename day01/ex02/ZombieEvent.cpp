//
// Created by Tony MACK on 2017/05/23.
//

#include <cstdlib>
#include "ZombieEvent.hpp"


void ZombieEvent::setZombieType(std::string ZombieType){
	this->type = ZombieType;
}

const std::string &ZombieEvent::getType() const {
	return type;
}

void ZombieEvent::setType(const std::string &type) {
	ZombieEvent::type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	return new Zombie(type ,name);
}

void ZombieEvent::randomChump() {
	std::string names[5] = {"tony", "jason", "Vuk", "Matthew", "Dylan"};
	int nbr = rand() % 5;
	Zombie* newZombie = new Zombie("black", names[nbr]);
	newZombie->announce();
	delete(newZombie);
}

ZombieEvent::ZombieEvent(const std::string &type) : type(type) {}

ZombieEvent::~ZombieEvent() {

}
