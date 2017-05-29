//
// Created by tony on 2017/05/29.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <string>
#include <cstdlib>

class Enemy {
private:
	int _Hp;
	std::string _type;

public:
	Enemy();
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int );
	Enemy &operator=(Enemy const &rhs);
};


#endif //EX01_ENEMY_HPP
