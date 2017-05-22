#include <iostream>
#include <string>
#include <locale>
int main(int argc, char **argv) {

    std::locale loc;
    std::string sSentance;

    if (argc > 1) {
	    for (int j = 1 ; j < argc  ; ++j)
		    sSentance = sSentance + argv[j] + " ";

        for (std::string::size_type i = 0; i < sSentance.length(); ++i)
            std::cout << std::toupper(sSentance[i], loc);
	    std::cout << std::endl;
	    return 0;
    }
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
    return 0;
}