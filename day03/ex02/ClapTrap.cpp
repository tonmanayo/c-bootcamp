//
// Created by Tony MACK on 2017/05/26.
//

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Master ClapTrap Created!\n";
}
ClapTrap::ClapTrap(std::string name): _HP(0), _MaxHP(0), _EP(0), _MeleeAttackDmg(0), _ArmorDmgRed(0), _Level(0), _MaxEP(0), _Name(name), _RangedAttackDmg(0) {
	std::cout << name << "Master ClapTrap Created!!\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "Master ClapTrap says GOODBYE!\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << rhs._Name << "I am Master ClapTrap\n";
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

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount > _ArmorDmgRed) {
		_HP - (amount - _ArmorDmgRed) > 0 ? _HP -= (amount - _ArmorDmgRed) : _HP = 0;
	}
	std::cout << "ClapTrap: FR4G-TP" << " < " <<_Name << " > " << "lost " << (amount - _ArmorDmgRed) << " life points!\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	_HP < _MaxHP ? _HP += amount : _HP = _MaxHP;
	std::cout << "ClapTrap: FR4G-TP" << " < " <<_Name << " > " << "has: " << _HP << "/" << _MaxHP << " life points\n";
}

int ClapTrap::get_HP() const {
	return _HP;
}

void ClapTrap::set_HP(int _HP) {
	ClapTrap::_HP = _HP;
}

int ClapTrap::get_MaxHP() const {
	return _MaxHP;
}

void ClapTrap::set_MaxHP(int _MaxHP) {
	ClapTrap::_MaxHP = _MaxHP;
}

int ClapTrap::get_EP() const {
	return _EP;
}

void ClapTrap::set_EP(int _EP) {
	ClapTrap::_EP = _EP;
}

int ClapTrap::get_MaxEP() const {
	return _MaxEP;
}

void ClapTrap::set_MaxEP(int _MaxEP) {
	ClapTrap::_MaxEP = _MaxEP;
}

int ClapTrap::get_Level() const {
	return _Level;
}

void ClapTrap::set_Level(int _Level) {
	ClapTrap::_Level = _Level;
}

const std::string &ClapTrap::get_Name() const {
	return _Name;
}

void ClapTrap::set_Name(const std::string &_Name) {
	ClapTrap::_Name = _Name;
}

int ClapTrap::get_MeleeAttackDmg() const {
	return _MeleeAttackDmg;
}

void ClapTrap::set_MeleeAttackDmg(int _MeleeAttackDmg) {
	ClapTrap::_MeleeAttackDmg = _MeleeAttackDmg;
}

int ClapTrap::get_RangedAttackDmg() const {
	return _RangedAttackDmg;
}

void ClapTrap::set_RangedAttackDmg(int _RangedAttackDmg) {
	ClapTrap::_RangedAttackDmg = _RangedAttackDmg;
}

int ClapTrap::get_ArmorDmgRed() const {
	return _ArmorDmgRed;
}

void ClapTrap::set_ArmorDmgRed(int _ArmorDmgRed) {
	ClapTrap::_ArmorDmgRed = _ArmorDmgRed;
}
