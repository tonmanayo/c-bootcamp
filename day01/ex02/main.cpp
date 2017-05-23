#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {

	std::string ZombieName = "";
	std::string ZombieType = "";

	std::cout << "Enter Zombie Type\n";
	std::cin >> ZombieType;
	std::cout << "Enter Zombie Name\n";
	std::cin >> ZombieName;

	Zombie newZombie(ZombieType, ZombieName);

	newZombie.getType();
	newZombie.announce();

	ZombieEvent newZombieEvent(ZombieType);

	std::string newZombieType = "";
	std::cout << "Enter new Zombie Type\n";
	std::cin >> newZombieType;
	newZombieEvent.setZombieType(newZombieType);

	std::string newZombieName = "";
	std::cout << "Enter new Zombie Name\n";
	std::cin >> newZombieName;
	Zombie* newZombie2 = newZombieEvent.newZombie(newZombieName);
	std::cout << "Zombie Name: " << newZombie2->getName() << std::endl << "Zombie Type: " << newZombie2->getType() << std::endl;

	std::cout << "Creating Random Zombie\n";
	newZombieEvent.randomChump();

	return 0;
}