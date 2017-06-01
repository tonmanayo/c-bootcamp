//
// Created by Tony MACK on 2017/05/26.
//

#include <iostream>
#include "FragTrap.hpp"


FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string name) {
	std::cout << name << " FragTrap: Wake up -- we are starting bootup sequence\nnoise... \nFR4G-TP at your service and ready to go!!\n";
	this->_HP = 100;
	this->_MaxHP = 100;
	this->_EP = 100;
	this->_MeleeAttackDmg = 30;
	this->_ArmorDmgRed = 5;
	this->_Level = 1;
	this->_MaxEP = 100;
	this->_Name = name;
	this->_RangedAttackDmg = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap: Ooh yeah, watch me! Watch me go! Destroyed!\n";
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	std::cout << rhs._Name << " FragTrap: Wake up -- we are starting bootup sequence\nnoise... \nFR4G-TP at your service and ready to go!!\n";
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

void FragTrap::rangedAttack(std::string const &target) {
	std::cout << "FragTrap: FR4G-TP" << " < " <<_Name << " > " << "attacks " << target << " at Range, causing " << _RangedAttackDmg << " Points of Damage\n";
}

void FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FragTrap: FR4G-TP" << " < " <<_Name << " > " << "attacks " << target << " at Melee, causing " << _MeleeAttackDmg << " Points of Damage\n";
}

void FragTrap::takeDamage(unsigned int amount) {


	if (amount > _ArmorDmgRed) {
		_HP - (amount - _ArmorDmgRed) > 0 ? _HP -= (amount - _ArmorDmgRed) : _HP = 0;
	}

	std::cout << "FragTrap: FR4G-TP" << " < " <<_Name << " > " << "lost " << (amount - _ArmorDmgRed) << " life points!\n";
}

void FragTrap::beRepaired(unsigned int amount) {

	_HP < _MaxHP ? _HP += amount : _HP = _MaxHP;
	std::cout << "FragTrap: FR4G-TP Repair" << " < " <<_Name << " > " << "now has: " << _HP << "/" << _MaxHP << " life points\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {

	srand(time(NULL));
	std::string sAttacks[5] = {"poop flinger", "fart", "lick", "tickle", "poke"};
	int rNum = rand() % 5;
	if (_EP >= 25) {
		_EP -= 25;
		std::cout << "Semi Random Attack initiated on: " << target << std::endl;
		std::cout << _Name << " Attacks " << target << " With " << sAttacks[rNum] << std::endl;
	} else
		std::cout << "Not Enough Energy Points, Try again later!\n";
}