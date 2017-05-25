#include <iostream>
#include "Human.hpp"

int main() {

	Human human;
	std::string sAction;
	std::string sTarget;

	std::cout << "Please Enter meleeAttack | rangedAttack | intimidatingShout\n";
	std::cin >> sAction;
	std::cout << "Please Enter Target Name!\n";
	std::cin >> sTarget;

	human.action(sAction, sTarget);
	return 0;
}