//
// Created by Tony MACK on 2017/05/23.
//

#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP


#include "Brain.hpp"

class Human {
public:
	const Brain brain;
	std::string identify() const;
	const Brain &getBrain() const ;
};


#endif //EX05_HUMAN_HPP
