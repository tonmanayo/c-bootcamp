#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <climits>
#include <limits>
#include <cmath>
#include <iomanip>

int main(int argc, char **argv) {

if (argc > 1) {

	float f = atof(argv[1]);
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);
	if (argv[1][0] == '\'' && argv[1][2] == '\'' && strlen(argv[1]) == 3)
		std::cout << "char: " << argv[1][1] << std::endl;
	else if (i > 32 && i < 126) {
		std::cout << "char: "; putchar(i); std::cout << std::endl;
	}
	else
		std::cout << "char: Not displayable\n";
	if (std::atof(argv[1]) < INT_MAX && std::atof(argv[1]) > INT_MIN){
		i = static_cast<int>(atof(argv[1]));
		std::cout << "int: " << i << std::endl;
	} else
		std::cout << "int: Not displayable\n";

		std::cout<< std::fixed << std::setprecision(1) <<"Float: " << f << "f" << std::endl;
		std::cout<< std::fixed << std::setprecision(1) <<"Double: " << d << std::endl;
	}
}