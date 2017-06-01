//
// Created by Tony MACK on 2017/05/26.
//

#ifndef EX00_FragTRAP_HPP
#define EX00_FragTRAP_HPP

#include "ClapTrap.hpp"
#include <string>


class FragTrap : public ClapTrap{

public:
	FragTrap();
	FragTrap(std::string name);
	virtual ~FragTrap();

	FragTrap &operator=(FragTrap const &rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

};


#endif //EX00_FragTRAP_HPP
