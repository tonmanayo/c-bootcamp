//
// Created by tony on 2017/05/29.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP


class TacticalMarine {
public:

	TacticalMarine();

	TacticalMarine*	clone();

	void battlecry();
	void rangedattack();
	void meleattack();
	virtual ~TacticalMarine();
};


#endif //EX02_TACTICALMARINE_HPP
