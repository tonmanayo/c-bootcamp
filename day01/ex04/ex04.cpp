#include <iostream>

int main() {
	std::string sSentance = "HI THIS IS BRAIN";
	std::string &sPSentance = sSentance;
	std::string *sRSentance = &sSentance;

	std::cout << "The pointer: " << *sRSentance << std::endl;
	std::cout << "The Referance: " << sPSentance << std::endl;

	return 0;
}