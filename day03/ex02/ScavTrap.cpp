//
// Created by Tony MACK on 2017/05/26.
//

#include <iostream>
#include "ScavTrap.hpp"


ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string name) {
	std::cout << name << " YOOHOO -- we are starting bootup sequence\nnoise... \nScavTrap at your service and ready to go!!\n";
	this->_HP = 100;
	this->_MaxHP = 100;
	this->_EP = 50;
	this->_MeleeAttackDmg = 20;
	this->_ArmorDmgRed = 3;
	this->_Level = 1;
	this->_MaxEP = 50;
	this->_Name = name;
	this->_RangedAttackDmg = 15;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: MY TIME HAS COME, GOODBYE!\n";
}

void ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "ScavTrap:" << " < " <<_Name << " > " << "attacks " << target << " at Range, causing " << _RangedAttackDmg << " Points of Damage\n";
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "ScavTrap:" << " < " <<_Name << " > " << "attacks " << target << " at Melee, causing " << _MeleeAttackDmg << " Points of Damage\n";
}

void ScavTrap::takeDamage(unsigned int amount) {

	if (amount > _ArmorDmgRed) {
		_HP - (amount - _ArmorDmgRed) > 0 ? _HP -= (amount - _ArmorDmgRed) : _HP = 0;
	}
	std::cout << "ScavTrap:" << " < " <<_Name << " > " << "lost " << (amount - _ArmorDmgRed) << " life points!\n";
}

void ScavTrap::beRepaired(unsigned int amount) {

	_HP < _MaxHP ? _HP += amount : _HP = _MaxHP;
	std::cout << "ScavTrap:" << " < " <<_Name << " > " << "has: " << _HP << "/" << _MaxHP << " life points\n";
}

void ScavTrap::challengeNewcomer() {

	srand(time(NULL));
	std::string sChallanges[5] = {"eyeball eating", "farting", "licking", "try not to laugh", "dancing"};
	int rNum = rand() % 5;
		std::cout << _Name << " Challenges you to a " << sChallanges[rNum] << " Challenge" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << rhs._Name << "I am Master ScavTrap\n";
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