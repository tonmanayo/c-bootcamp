//
// Created by tony on 2017/05/29.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage) {

}

AWeapon::~AWeapon() {

}

std::string AWeapon::getName() const {
	return _name;
}

int AWeapon::getAPCost() const {
	return _apcost;
}

int AWeapon::getDamage() const {
	return _damage;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs) {
	this->_name = rhs._name;
	this->_damage = rhs._damage;
	this->_apcost = rhs._apcost;
	return *this;
}

AWeapon::AWeapon() {

}
