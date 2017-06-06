#include <iostream>
#include <vector>


#include "easyfind.hpp"

int main() {
	int s[6] = {1, 2, 3, 4, 5, 6};
	int *found;
	found = easyfind<int *>(s, 2);
	std::cout << *found;
	return 0;
}