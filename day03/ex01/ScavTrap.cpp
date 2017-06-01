//
// Created by Tony MACK on 2017/05/26.
//

#include <iostream>
#include "ScavTrap.hpp"


ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string name): _HP(100), _MaxHP(100), _EP(50), _MeleeAttackDmg(20), _ArmorDmgRed(3), _Level(1), _MaxEP(50), _Name(name), _RangedAttackDmg(15) {
	std::cout << name << " YOOHOO -- we are starting bootup sequence\nnoise... \nScavTrap at your service and ready to go!!\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "MY TIME HAS COME, GOODBYE!\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << rhs._Name << "YOOHOO -- we are starting bootup sequence\nnoise... \nScavTrap at your service and ready to go!!\n";
	if (this != &rhs){
		this->_EP = rhs.get_EP();
		this->_ArmorDmgRed = rhs.get_ArmorDmgRed();
		this->_HP = rhs.get_HP();
		this->_Level = rhs.get_Level();
		this->_Name = rhs.get_Name();
		this->_MaxEP = rhs.get_MaxEP();
		this->_MeleeAttackDmg = rhs.get_MeleeAttackDmg();
		this->_RangedAttackDmg = rhs.get_RangedAttackDmg();
		this->_MaxHP = rhs.get_MaxHP();
	}
	return *this;
}

void ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-FT" << " < " <<_Name << " > " << "attacks " << target << " at Range, causing " << _RangedAttackDmg << " Points of Damage\n";
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-FT" << " < " <<_Name << " > " << "attacks " << target << " at Melee, causing " << _MeleeAttackDmg << " Points of Damage\n";
}

void ScavTrap::takeDamage(unsigned int amount) {

	if (amount > _ArmorDmgRed) {
		_HP - (amount - _ArmorDmgRed) > 0 ? _HP -= (amount - _ArmorDmgRed) : _HP = 0;
	}
	std::cout << "FR4G-FT" << " < " <<_Name << " > " << "lost " << (amount - _ArmorDmgRed) << " life points!\n";
}

void ScavTrap::beRepaired(unsigned int amount) {

	_HP < _MaxHP ? _HP += amount : _HP = _MaxHP;
	std::cout << "FR4G-FT" << " < " <<_Name << " > " << "has: " << _HP << "/" << _MaxHP << " life points\n";
}

void ScavTrap::challengeNewcomer() {

	srand(time(NULL));
	std::string sChallanges[5] = {"eyeball eating", "farting", "licking", "try not to laugh", "dancing"};
	int rNum = rand() % 5;
		std::cout << _Name << " Challenges you to a " << sChallanges[rNum] << " Challenge" << std::endl;
}

int ScavTrap::get_HP() const {
	return _HP;
}

void ScavTrap::set_HP(int _HP) {
	ScavTrap::_HP = _HP;
}

int ScavTrap::get_MaxHP() const {
	return _MaxHP;
}

void ScavTrap::set_MaxHP(int _MaxHP) {
	ScavTrap::_MaxHP = _MaxHP;
}

int ScavTrap::get_EP() const {
	return _EP;
}

void ScavTrap::set_EP(int _EP) {
	ScavTrap::_EP = _EP;
}

int ScavTrap::get_MaxEP() const {
	return _MaxEP;
}

void ScavTrap::set_MaxEP(int _MaxEP) {
	ScavTrap::_MaxEP = _MaxEP;
}

int ScavTrap::get_Level() const {
	return _Level;
}

void ScavTrap::set_Level(int _Level) {
	ScavTrap::_Level = _Level;
}

const std::string &ScavTrap::get_Name() const {
	return _Name;
}

void ScavTrap::set_Name(const std::string &_Name) {
	ScavTrap::_Name = _Name;
}

int ScavTrap::get_MeleeAttackDmg() const {
	return _MeleeAttackDmg;
}

void ScavTrap::set_MeleeAttackDmg(int _MeleeAttackDmg) {
	ScavTrap::_MeleeAttackDmg = _MeleeAttackDmg;
}

int ScavTrap::get_RangedAttackDmg() const {
	return _RangedAttackDmg;
}

void ScavTrap::set_RangedAttackDmg(int _RangedAttackDmg) {
	ScavTrap::_RangedAttackDmg = _RangedAttackDmg;
}

int ScavTrap::get_ArmorDmgRed() const {
	return _ArmorDmgRed;
}

void ScavTrap::set_ArmorDmgRed(int _ArmorDmgRed) {
	ScavTrap::_ArmorDmgRed = _ArmorDmgRed;
}
