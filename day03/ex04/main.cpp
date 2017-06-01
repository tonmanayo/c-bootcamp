#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

	ScavTrap scavTrap(sPlayer);

	std::cout << "Please enter Target to Attack\n";
	std::cin >> sTarget;
	scavTrap.meleeAttack(sTarget);
	scavTrap.rangedAttack(sTarget);
	scavTrap.takeDamage(20);
	scavTrap.beRepaired(2);
	scavTrap.challengeNewcomer();
std::cout << "--------------------------------------------------------------------\n";
std::cout << "--------------------------------------------------------------------\n";
std::cout << "--------------------------------------------------------------------\n";
	NinjaTrap ninjaTrap("Ninja1");

	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(ninjaTrap);
	ninjaTrap.ninjaShoebox(scavTrap);

std::cout << "--------------------------------------------------------------------\n";
std::cout << "--------------------------------------------------------------------\n";
std::cout << "--------------------------------------------------------------------\n";

	SuperTrap superTrap("Super Trap");

	std::cout << "showing the Value of the HP has been taken for the other class: "<< superTrap.get_HP() << std::endl;

	std::cout << "Showing that the class inherrits the ninjs special function\n";
	superTrap.ninjaShoebox(scavTrap);
	std::cout << "Showing that the class inherrits the fragTrap special function\n";
	superTrap.vaulthunter_dot_exe("I am the Target");
	std::cout << "Showing that the class inherrits the fragTrap Ranged function\n";
	superTrap.rangedAttack("Super Trap");
	std::cout << "Showing that the class inherrits the NinjaTrap Attack function\n";
	superTrap.meleeAttack("Super Trap");

	return 0;
}