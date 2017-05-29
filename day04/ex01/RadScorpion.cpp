//
// Created by tony on 2017/05/29.
//

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion") {
 std::cout << "* click click click *\n";
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *\n";

}

RadScorpion	&RadScorpion::operator=(RadScorpion const &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}