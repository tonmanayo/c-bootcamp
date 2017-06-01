//
// Created by Tony MACK on 2017/05/26.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP


#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap &operator=(ScavTrap const &rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
};


#endif //EX01_SCAVTRAP_HPP
