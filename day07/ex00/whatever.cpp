//
// Created by Tony MACK on 2017/06/01.
//

#include <iostream>

template<typename T>
void swap(T &num1, T &num2) {
T temp;
temp = num1;
	num1 = num2;
	num2 = temp;
}

template<typename T>
T min(T const &num1, T const &num2) {
	if(num1 < num2)
		return num1;
	else if (num2 < num1 || num2 == num1)
		return num2;
	return 0;
}

template<typename T>
T max(T const &num1, T const &num2) {
	if(num1 > num2)
		return num1;
	else if (num2 > num1 || num2 == num1)
		return num2;
	return 0;
}


int main( void ) {

	int a = 2;

	int b = 3;

	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;

	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";

	std::string d = "chaine2";

	::swap(c, d);

	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;

	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;

}