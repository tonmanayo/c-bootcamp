//
// Created by Tony MACK on 2017/05/26.
//

#ifndef EX03_NINJA_HPP
#define EX03_NINJA_HPP


#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : public virtual ClapTrap{

public:
	NinjaTrap();
	NinjaTrap(std::string name);
	virtual ~NinjaTrap();

	NinjaTrap &operator=(NinjaTrap const &rhs);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void ninjaShoebox(FragTrap &fragTrap);
	void ninjaShoebox(ScavTrap &scavTrap);
	void ninjaShoebox(NinjaTrap &ninjaTrap);
	void ninjaShoebox(ClapTrap &clapTrap);

};

#endif //EX03_NINJA_HPP
