//
// Created by Tony MACK on 2017/05/26.
//

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(){}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name){
	std::cout << name << " SuperTrap: Wake up -- we are starting bootup sequence\nnoise... \nFR4G-TP at your service and ready to go!!\n";

	this->_HP = 100;
	this->_MaxHP = 100;
	this->_MaxEP = 120;
	this->_EP = 120;
	this->_MeleeAttackDmg = 60;
	this->_ArmorDmgRed = 5;
	this->_Level = 1;
	this->_Name = name;
	this->_RangedAttackDmg = 20;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap: Ooh yeah, watch me! Watch me go! Destroyed!\n";
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs) {
	std::cout << rhs._Name << " SuperTrap: Wake up -- we are starting bootup sequence\nnoise... \nFR4G-TP at your service and ready to go!!\n";
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

void SuperTrap::rangedAttack(std::string const &target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) {
	NinjaTrap::meleeAttack(target);
}