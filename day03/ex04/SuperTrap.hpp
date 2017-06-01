//
// Created by Tony MACK on 2017/05/26.
//

#ifndef DAY03_SUPERTRAP_HPP
#define DAY03_SUPERTRAP_HPP


#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap();

	SuperTrap(std::string name);

	virtual ~SuperTrap();

	SuperTrap &operator=(SuperTrap const &rhs);

	void rangedAttack(std::string const &target);

	void meleeAttack(std::string const &target);

};


#endif //DAY03_SUPERTRAP_HPP
