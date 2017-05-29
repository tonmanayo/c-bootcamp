//
// Created by tony on 2017/05/29.
//

#include <iostream>
#include "Character.hpp"

Character::Character(std::string const &name): _name(name), _AP(40) {

}

Character::~Character() {

}

void Character::recoverAP() {
	if (_AP <= 30)
		_AP += 10;
}

void Character::equip(AWeapon *weapon) {
	_aWeapon = weapon;
}

void Character::attack(Enemy *enemy) {
	if (_AP > _aWeapon->getAPCost() && _aWeapon != NULL) {
		std::cout << _name << " attacks " << enemy->getType() << " with a " << _aWeapon->getName() << std::endl;
		_aWeapon->attack();
		_AP -= _aWeapon->getAPCost();
		enemy->takeDamage(_aWeapon->getDamage());
	}
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const Character::getName() const {
	return _name;
}

const std::string &Character::get_name() const {
	return _name;
}

int Character::get_AP() const {
	return _AP;
}

AWeapon *Character::get_aWeapon() const {
	return _aWeapon;
}

std::ostream &operator<<(std::ostream &o, Character const &rhs) {
	o	<< rhs.getName() << " has " << rhs.get_AP() << " AP and ";
	if (rhs.get_aWeapon() == NULL)
		o << "is unarmed";
	else
		o << "weilds a " << rhs.get_aWeapon()->getName();
	return (o << std::endl);
}
