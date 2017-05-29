//
// Created by tony on 2017/05/29.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP


#include "AWeapon.hpp"

class PowerFist: public AWeapon {
public:
	PowerFist();
	void attack() const ;
	PowerFist &operator=(PowerFist const &rhs);
};


#endif //EX01_POWERFIST_HPP
