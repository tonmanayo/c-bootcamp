//
// Created by Tony MACK on 2017/05/23.
//

#ifndef EX05_BRAIN_HPP
#define EX05_BRAIN_HPP


#include <string>

class Brain {

public:
	std::string sFood;
	std::string sSleep;

	std::string identify() const ;


	Brain();

	virtual ~Brain();
};


#endif //EX05_BRAIN_HPP
