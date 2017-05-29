//
// Created by tony on 2017/05/29.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <cstdlib>
#include <string>

class Victim {
	std::string _name;

public:
	Victim();
	virtual ~Victim();
	Victim(const std::string &_name);
	Victim &operator=(Victim const & sorcerer);
	virtual void getPolymorphed() const;

	const std::string &get_name() const;
};
std::ostream    &operator<<(std::ostream & o, Victim const & rhs);

#endif //EX00_VICTIM_HPP
