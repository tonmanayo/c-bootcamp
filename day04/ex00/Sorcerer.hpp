//
// Created by tony on 2017/05/29.
//

#ifndef EX00_SOURCERER_HPP
#define EX00_SOURCERER_HPP

#include <cstdlib>
#include <string>
#include "Victim.hpp"

class Sorcerer {

private:
	std::string _name;
	std::string _title;

public:

	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer();
	Sorcerer &operator=(Sorcerer const & sorcerer);
	virtual ~Sorcerer();

	void polymorph(Victim const &) const;

	const std::string &get_name() const;
	const std::string &get_title() const;

};

std::ostream    &operator<<(std::ostream &o, Sorcerer const &i);



#endif //EX00_SOURCERER_HPP
