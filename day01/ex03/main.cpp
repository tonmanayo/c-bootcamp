#include <iostream>
#include "ZombieHorde.hpp"

int main() {
	ZombieHorde newHord(5);

	newHord.announce();

	delete(newHord);
	return 0;
}