#include <iostream>
#include <fstream>

int main() {
	std::string s1 = "";
	std::string sWord = "";
	std::string s2 = "";
	std::string fileName = "test.txt";
	size_t f = 0;

	std::cout << "Please enter File Name\n";
	std::cin >> fileName;

	std::cout << "Please enter word to replace\n";
	std::cin >> s1;

	std::cout << "Please enter word to be replaced with\n";
	std::cin >> s2;

	std::ifstream ifs(fileName);

	std::ofstream ofs("FILENAME.replace");

	if (ifs) {

		while (std::getline(ifs, sWord)) {
			while ((f = sWord.find(s1, f)) != std::string::npos) {
				sWord.replace(f, s1.length(), s2);
			}
			ofs << sWord;
		}
	} else {
		std::cout << "Could not open file";
	}
	ifs.close();
	ofs.close();


	return 0;
}