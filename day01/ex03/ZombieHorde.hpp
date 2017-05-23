
//
// Created by Tony MACK on 2017/05/23.
//

#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP


#include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int Z);
	Zombie *arrZombie;
	int Z;

	void announce ();
};


#endif //EX03_ZOMBIEHORDE_HPP
