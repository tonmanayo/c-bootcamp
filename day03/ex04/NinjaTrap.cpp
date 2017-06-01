//
// Created by Tony MACK on 2017/05/26.
//

#include <iostream>
#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap(){}

NinjaTrap::NinjaTrap(std::string name) {
	std::cout << name << " NinjaTrap: Wake up -- we are starting bootup sequence\nnoise... \nFR4G-TP at your service and ready to go!!\n";
	this->_HP = 60;
	this->_MaxHP = 60;
	this->_MaxEP = 120;
	this->_EP = 120;
	this->_MeleeAttackDmg = 60;
	this->_ArmorDmgRed = 0;
	this->_Level = 1;
	this->_Name = name;
	this->_RangedAttackDmg = 5;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap: Ooh yeah, watch me! Watch me go! Destroyed!\n";
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs) {
	std::cout << rhs._Name << " NinjaTrap: Wake up -- we are starting bootup sequence\nnoise... \nFR4G-TP at your service and ready to go!!\n";
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

void NinjaTrap::rangedAttack(std::string const &target) {
	std::cout << "NinjaTrap: FR4G-TP" << " < " <<_Name << " > " << "attacks " << target << " at Range, causing " << _RangedAttackDmg << " Points of Damage\n";
}

void NinjaTrap::meleeAttack(std::string const &target) {
	std::cout << "NinjaTrap: FR4G-TP" << " < " <<_Name << " > " << "attacks " << target << " at Melee, causing " << _MeleeAttackDmg << " Points of Damage\n";
}

void NinjaTrap::ninjaShoebox(FragTrap &fragTrap) {
	fragTrap.takeDamage(20);
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap) {
	scavTrap.takeDamage(20);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap) {
	ninjaTrap.takeDamage(20);
}

void NinjaTrap::ninjaShoebox(ClapTrap &clapTrap) {
	clapTrap.takeDamage(20);
}

