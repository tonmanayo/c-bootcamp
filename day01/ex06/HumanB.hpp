//
// Created by Tony MACK on 2017/05/23.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP


#include "Weapon.hpp"

class HumanB {
	Weapon *weapon;
	std::string name;


public:
	void attack();

	HumanB(const std::string &name);

	virtual ~HumanB();

	const Weapon &getWeapon() const;

	void setWeapon(Weapon weapon);

	const std::string &getName() const;

	void setName(const std::string &name);

};


#endif //EX06_HUMANB_HPP
