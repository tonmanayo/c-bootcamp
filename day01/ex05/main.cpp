#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"

int main() {
	//Brain theBrain;
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	//std::cout << theBrain.identify();
	return 0;
}