//
// Created by Tony MACK on 2017/05/23.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP


#include <string>

class Weapon {
public:
	std::string type;

	const std::string &getType() const;

	Weapon(const std::string &type);

	void setType(const std::string type);

	virtual ~Weapon();

};


#endif //EX06_WEAPON_HPP
