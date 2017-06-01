//
// Created by Tony MACK on 2017/05/26.
//


#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string name): _HP(100), _MaxHP(100), _EP(100), _MeleeAttackDmg(30), _ArmorDmgRed(5), _Level(1), _MaxEP(50), _Name(name), _RangedAttackDmg(20) {
	std::cout << name << " YOOHOO -- we are starting bootup sequence\nnoise... \nFragTrap at your service and ready to go!!\n";
}

FragTrap::~FragTrap() {
	std::cout << "MY TIME HAS COME, GOODBYE!\n";
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	std::cout << rhs._Name << "YOOHOO -- we are starting bootup sequence\nnoise... \nFragTrap at your service and ready to go!!\n";
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
	std::cout << "FR4G-FT" << " < " <<_Name << " > " << "attacks " << target << " at Range, causing " << _RangedAttackDmg << " Points of Damage\n";
}

void FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-FT" << " < " <<_Name << " > " << "attacks " << target << " at Melee, causing " << _MeleeAttackDmg << " Points of Damage\n";
}

void FragTrap::takeDamage(unsigned int amount) {

	if (amount > _ArmorDmgRed) {
		_HP - (amount - _ArmorDmgRed) > 0 ? _HP -= (amount - _ArmorDmgRed) : _HP = 0;
	}
	std::cout << "FR4G-FT" << " < " <<_Name << " > " << "lost " << (amount - _ArmorDmgRed) << " life points!\n";
}

void FragTrap::beRepaired(unsigned int amount) {

	_HP < _MaxHP ? _HP += amount : _HP = _MaxHP;
	std::cout << "FR4G-FT" << " < " <<_Name << " > " << "has: " << _HP << "/" << _MaxHP << " life points\n";
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

int FragTrap::get_HP() const {
	return _HP;
}

void FragTrap::set_HP(int _HP) {
	FragTrap::_HP = _HP;
}

int FragTrap::get_MaxHP() const {
	return _MaxHP;
}

void FragTrap::set_MaxHP(int _MaxHP) {
	FragTrap::_MaxHP = _MaxHP;
}

int FragTrap::get_EP() const {
	return _EP;
}

void FragTrap::set_EP(int _EP) {
	FragTrap::_EP = _EP;
}

int FragTrap::get_MaxEP() const {
	return _MaxEP;
}

void FragTrap::set_MaxEP(int _MaxEP) {
	FragTrap::_MaxEP = _MaxEP;
}

int FragTrap::get_Level() const {
	return _Level;
}

void FragTrap::set_Level(int _Level) {
	FragTrap::_Level = _Level;
}

const std::string &FragTrap::get_Name() const {
	return _Name;
}

void FragTrap::set_Name(const std::string &_Name) {
	FragTrap::_Name = _Name;
}

int FragTrap::get_MeleeAttackDmg() const {
	return _MeleeAttackDmg;
}

void FragTrap::set_MeleeAttackDmg(int _MeleeAttackDmg) {
	FragTrap::_MeleeAttackDmg = _MeleeAttackDmg;
}

int FragTrap::get_RangedAttackDmg() const {
	return _RangedAttackDmg;
}

void FragTrap::set_RangedAttackDmg(int _RangedAttackDmg) {
	FragTrap::_RangedAttackDmg = _RangedAttackDmg;
}

int FragTrap::get_ArmorDmgRed() const {
	return _ArmorDmgRed;
}

void FragTrap::set_ArmorDmgRed(int _ArmorDmgRed) {
	FragTrap::_ArmorDmgRed = _ArmorDmgRed;
}
