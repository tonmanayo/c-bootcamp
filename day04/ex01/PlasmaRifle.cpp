//
// Created by tony on 2017/05/29.
//
#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}
PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	AWeapon::operator=(rhs);
	return *this;
}

void    PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}