#include <iostream>
#include "Array.hpp"
int main() {
	Array <int>arr(4);
	Array<std::string> StringArray(5);

	try {
		arr[0] = 5;
		std::cout <<"The int: " << arr[0] << std::endl;
		StringArray[0] = "Tony";
		std::cout <<"The String: " << StringArray[0] << std::endl;
		arr[4] = 9;
		StringArray[6] = "wont work";
		//std::cout << arr[4] << StringArray[6] << std::endl;

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	return 0;
}