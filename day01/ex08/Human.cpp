//
// Created by Tony MACK on 2017/05/24.
//

#include <iostream>
#include "Human.hpp"

void Human::meleeAttack(std::string const &target) {
	std::cout << "Melee Attack! on " << target << std::endl;
}

void Human::rangedAttack(std::string const &target) {
	std::cout << "Ranged Attack! on " << target << std::endl;

}

void Human::intimidatingShout(std::string const &target) {
	std::cout << "intimidating Shout! to " << target << std::endl;

}

std::string sAttackNames[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

void Human::action(std::string const &action_name, std::string const &target) {
	typedef void(Human::*attack)(std::string const &_target);

	attack attacks[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int q = 0; q < 3; ++q) {
		if (sAttackNames[q] == action_name) {
			(this->*attacks[q])(target);
		}
	}

}
