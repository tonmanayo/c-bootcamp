//
// Created by tony on 2017/05/29.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP


#include "Enemy.hpp"

class RadScorpion : public Enemy {
private:
public:
	RadScorpion();
	virtual ~RadScorpion();

	RadScorpion	&operator=(RadScorpion const &rhs);
};


#endif //EX01_RADSCORPION_HPP
