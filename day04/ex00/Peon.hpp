//
// Created by tony on 2017/05/29.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP


#include "Victim.hpp"

class Peon: public Victim{
public:
	Peon(void);
	Peon(std::string name);
	~Peon(void);
	virtual void    getPolymorphed(void) const;
	Peon    &operator=(Peon const & peon);

private:
	std::string _name;
};


#endif //EX00_PEON_HPP
