//
// Created by tony on 2017/05/29.
//

#include <clocale>
#include "Squad.hpp"

int Squad::getCount() const {
	return _Count;
}

ISquad *Squad::getUnit(int unit) const {
	if (unit < _Count)
		return (ISquad[unit]);
	else
		return (NULL);

}
