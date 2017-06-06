#include <iostream>
#include "span.hpp"
int main() {

	srand(time(NULL));
	span newSpan(1001);

	//newSpan.addnumber(1);
try {
	for (int i = 0; i < 1002; ++i) {
		int k = rand() % INT_MAX;
		std::cout << k << std::endl;
		newSpan.addnumber(k);
	}

	std::cout << "shortest span: " << newSpan.shortestSpan() << "\nlongest span: " << newSpan.longestSpan()
	          << std::endl;
} catch (int x)
{
	if (x == -1)
		std::cout << "Error: " << x <<" Length to long" << std::endl;
	else if (x == -2)
		std::cout << "Error: "<<  x << "need to add more elements\n";
}

	return 0;
}