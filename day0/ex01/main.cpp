#include <iostream>
#include <iomanip>

#include "Contact.class.hpp"
int main() {

	std::string sFname = "";
	std::string sLname = "";
	std::string sNname = "";
	std::string slogin = "";
	std::string sPostalA = "";
	std::string sEmail = "";
	std::string iPhoneNbr = "";
	std::string sBdate = "";
	std::string sFavMeal = "";
	std::string sUnderwareCol = "";
	std::string sDarkestSecret = "";
	std::string sFunction = "";
	int iSearchIndex = 99;
	int icount = 0;

	Contact newContact[8];

	while (1) {
		std::cout << "Enter Option ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, sFunction);
		//std::cin >> sFunction;
		if (sFunction == "ADD" && icount <= 7) {
			std::cout << "Please enter First Name" << std::endl;
			//std::cin >> sFname;
			std::getline(std::cin, sFname);
			std::cout << "Please enter Last Name" << std::endl;
			std::getline(std::cin, sLname);
			std::cout << "Please enter Nickname" << std::endl;
			std::getline(std::cin, sNname);
			std::cout << "Please enter Login Name" << std::endl;
			std::getline(std::cin, slogin);
			std::cout << "Please enter Postal Address" << std::endl;
			std::getline(std::cin, sPostalA);
			//std::getline(std::cin, sPostalA;
			std::cout << "Please enter Email Address" << std::endl;
			std::getline(std::cin, sEmail);
			std::cout << "Please enter Phone Number" << std::endl;
			std::getline(std::cin,iPhoneNbr);
			std::cout << "Please enter Birth Date" << std::endl;
			std::getline(std::cin, sBdate);
			std::cout << "Please enter Favourite Meal" << std::endl;
			std::getline(std::cin, sFavMeal);
			std::cout << "Please enter Favourite underware colour" << std::endl;
			std::getline(std::cin, sUnderwareCol);
			std::cout << "Please enter Darkest Secret" << std::endl;
			std::getline(std::cin, sDarkestSecret);
			newContact[icount].set_sFname(sFname);
			newContact[icount] = Contact(sFname, sLname, sNname, slogin, sPostalA, sEmail, iPhoneNbr, sBdate, sFavMeal,
			                             sUnderwareCol, sDarkestSecret);
			icount++;

		} else if (sFunction == "SEARCH") {
			std::cout  << std::setw(10) << std::right << "index" << "|" << std::setw(10) << std::right << "first name" << "|" << std::setw(10) << std::right << "last name" << "|" << std::setw(10) << std::right << "nickname" << "|" << std::endl;
			for (int i = 0; i < icount; ++i) {
				std::cout << std::setw(10) << std::right <<i<< "|";
				if (newContact[i].get_sFname().length() > 10)
					std::cout << std::setw(9) << std::right << newContact[i].get_sFname().substr(0, 9) << "." << "|";
				else
					std::cout << std::setw(10) << std::right << newContact[i].get_sFname() << "|";
				if (newContact[i].get_sLname().length() > 10)
					std::cout << std::setw(9) << std::right << newContact[i].get_sLname().substr(0, 9) << "." << "|";
				else
					std::cout << std::setw(10) << std::right << newContact[i].get_sLname() << "|";
				if (newContact[i].get_sNname().length() > 10)
					std::cout << std::setw(9) << std::right << newContact[i].get_sNname().substr(0, 9) << "." << "|" << std::endl;
				else
					std::cout << std::setw(10) << std::right << newContact[i].get_sNname() << "|" << std::endl;
			}
			std::cout << "Please Enter Index Number Of The Desired Entry\n";
			if (std::cin >> iSearchIndex) {
			} else {
				std::cout << "Please enter a valid integer" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}

			if ((iSearchIndex >= 0 && iSearchIndex <= 7) && (iSearchIndex <= icount)) {

				std::cout << newContact[iSearchIndex].get_sFname() << std::endl;
				std::cout << newContact[iSearchIndex].get_sLname() << std::endl;
				std::cout << newContact[iSearchIndex].get_sNname() << std::endl;
				std::cout << newContact[iSearchIndex].get_slogin() << std::endl;
				std::cout << newContact[iSearchIndex].get_sPostalA() << std::endl;
				std::cout << newContact[iSearchIndex].get_sEmail() << std::endl;
				std::cout << newContact[iSearchIndex].get_iPhoneNbr() << std::endl;
				std::cout << newContact[iSearchIndex].get_sBdate() << std::endl;
				std::cout << newContact[iSearchIndex].get_sFavMeal() << std::endl;
				std::cout << newContact[iSearchIndex].get_sUnderwareCol() << std::endl;
				std::cout << newContact[iSearchIndex].get_sDarkestSecret() << std::endl;
			} else
				std::cout << "invalid index\n";

		} else if (sFunction == "EXIT") {
			return 0;
		} else if (icount > 7) {
			std::cout << "Maximum of entries added\n";
		}

	}
	return 0;
}
