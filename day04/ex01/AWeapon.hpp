//
// Created by tony on 2017/05/29.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP

#include <cstdlib>
#include <string>

class AWeapon {
private:
	std::string _name;
	int _apcost;
	int _damage;
public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon &operator=(AWeapon const &rhs);
	virtual ~AWeapon();
	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};


#endif //EX01_AWEAPON_HPP
