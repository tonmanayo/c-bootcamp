#include <iostream>
#include "FragTrap.hpp"

int main() {

	std::string sTarget = "";
	std::string sPlayer = "";
	std::cout << "Please enter Player Name\n";
	std::cin >> sPlayer;
	std::cout << "Please enter Target to Attack\n";
	std::cin >> sTarget;
	FragTrap fragTrap(sPlayer);
	fragTrap.meleeAttack(sTarget);
	fragTrap.rangedAttack(sTarget);
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(2);
	fragTrap.vaulthunter_dot_exe(sTarget);

	FragTrap fragTrap2("new");
	std::cout << "here\n";

	fragTrap2 = fragTrap;

	fragTrap2.takeDamage(23);

	return 0;
}