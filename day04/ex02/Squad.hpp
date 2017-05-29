//
// Created by tony on 2017/05/29.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

#include "ISquad.hpp"
class Squad: public ISquad {
private:
	ISpaceMarine **marines;
	int _Count;
	int len;
public:
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	void push(ISpaceMarine);
};


#endif //EX02_SQUAD_HPP
