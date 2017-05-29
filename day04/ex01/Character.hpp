//
// Created by tony on 2017/05/29.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP


#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
public:
	Character(std::string const &name);
	virtual ~Character();
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string const getName() const;

private:
	std::string _name;
	int _AP;
public:
	const std::string &get_name() const;

	int get_AP() const;

	AWeapon *get_aWeapon() const;

private:
	AWeapon *_aWeapon;
};
std::ostream	&operator<<(std::ostream &o, Character const &rhs);


#endif //EX01_CHARACTER_HPP
