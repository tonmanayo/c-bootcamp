//
// Created by tony on 2017/05/29.
//

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type): _Hp(hp), _type(type) {

}

Enemy::~Enemy() {

}

std::string const Enemy::getType() const {
	return _type;
}

int Enemy::getHP() const {
	return _Hp;
}

void Enemy::takeDamage(int dmg) {
	if (dmg < 0)
		;
	else
		_Hp -= dmg;
}

Enemy &Enemy::operator=(Enemy const &rhs) {
	this->_Hp = rhs.getHP();
	this->_type = rhs.getType();
	return *this;
}

Enemy::Enemy() {

}
