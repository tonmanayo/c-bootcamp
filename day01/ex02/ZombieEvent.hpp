//
// Created by Tony MACK on 2017/05/23.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP


#include <string>
#include "Zombie.hpp"

class ZombieEvent {
public:
	void setZombieType(std::string ZombieType);

private:
	std::string type;
public:
	const std::string &getType() const;

	void setType(const std::string &type);
	Zombie* newZombie(std::string name);
	void randomChump();

	ZombieEvent(const std::string &type);

	virtual ~ZombieEvent();
};


#endif //EX02_ZOMBIEEVENT_HPP
