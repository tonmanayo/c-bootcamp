//
// Created by tony on 2017/05/29.
//

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power First", 8, 50) {}

PowerFist   &PowerFist::operator=(PowerFist const &rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *\n";
}