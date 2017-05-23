//
// Created by Tony MACK on 2017/05/23.
//

#include <cstdlib>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"
ZombieHorde::ZombieHorde(int Z) {
	this->Z = Z;
	this->arrZombie = new Zombie[Z];
	srand(time(NULL));

	std::string names[5] = {"Tony", "Kyle", "Rob", "Richard", "Angus"};
	std::string types[5] = {"Dark", "light", "spiky", "round", "square"};
	int nbr = 0;
	int nbr2 = 0;
	for (int i = 0; i < Z ; i++) {
		nbr =  rand() % 5;
		 nbr2 = rand() % 5 ;
		this->arrZombie[i] = Zombie(types[nbr2], names[nbr]);
	}
}

void ZombieHorde::announce() {

	for (int i = 0; i < this->Z; ++i) {
		this->arrZombie[i].announce();
	}
}