//
// Created by tony on 2017/05/29.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP


#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle();
	void attack() const ;
	PlasmaRifle	&operator=(PlasmaRifle const &rhs);
	~PlasmaRifle();
};


#endif //EX01_PLASMARIFLE_HPP
