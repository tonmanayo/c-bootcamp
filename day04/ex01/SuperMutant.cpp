//
// Created by tony on 2017/05/29.
//

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std:: cout << "Gaah, Me wants to smash heads!\n";
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh\n";
}

void SuperMutant::takeDamage(int dmg){
//	if (dmg - 3 < 0)
//		;
//	else
//		_Hp = _Hp - (dmg - 3);
	int hp = this->getHP();
	dmg = dmg - 3;
	if (dmg > 0)
		Enemy::takeDamage(dmg);
	if (this->getHP() <= 0)
		std::cout << "Aaargh\n";
}