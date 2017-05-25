//
// Created by Tony MACK on 2017/05/24.
//

#ifndef EX08_HUMAN_HPP
#define EX08_HUMAN_HPP


#include <string>

class Human
{
private:
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);
public:
	void action(std::string const & action_name, std::string const & target);
};


#endif //EX08_HUMAN_HPP
