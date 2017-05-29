//
// Created by tony on 2017/05/29.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP


#include "Enemy.hpp"

class SuperMutant: Enemy {
public:
	SuperMutant();

	virtual ~SuperMutant();
	void virtual takeDamage(int );
};


#endif //EX01_SUPERMUTANT_HPP
