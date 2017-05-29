//
// Created by tony on 2017/05/29.
//

#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP


#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
	AssaultTerminator();
	void battlecry();
	void rangedattack();
	void meleattack();
	virtual ~AssaultTerminator();
};


#endif //EX02_ASSAULTTERMINATOR_HPP
