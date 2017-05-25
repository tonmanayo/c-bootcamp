//
// Created by Tony MACK on 2017/05/23.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP


#include "Weapon.hpp"

class HumanA {
	std::string name;
	Weapon & weapon;

public:
	void attack();

	HumanA(const std::string &name, Weapon& weapon);

	virtual ~HumanA();

	const std::string &getName() const;

	void setName(const std::string &name);

	Weapon getWeapon() const;


};
#endif //EX06_HUMANA_HPP
