//
// Created by Tony MACK on 2017/05/26.
//

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP


#include <string>

class ClapTrap {
protected:
	int _HP;
	int _MaxHP;
	int _EP;
	int _MaxEP;
	int _Level;
	std::string _Name;
	int _MeleeAttackDmg;
	int _RangedAttackDmg;
	int _ArmorDmgRed;
public:

	ClapTrap();
	ClapTrap(std::string name);
	virtual ~ClapTrap();

	ClapTrap &operator=(ClapTrap const &rhs);

	virtual void rangedAttack(std::string const & target) = 0;
	virtual void meleeAttack(std::string const & target) = 0;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int get_HP() const;
	void set_HP(int _HP);
	int get_MaxHP() const;
	void set_MaxHP(int _MaxHP);
	int get_EP() const;
	void set_EP(int _EP);
	int get_MaxEP() const;
	void set_MaxEP(int _MaxEP);
	int get_Level() const;
	void set_Level(int _Level);
	const std::string &get_Name() const;
	void set_Name(const std::string &_Name);
	int get_MeleeAttackDmg() const;
	void set_MeleeAttackDmg(int _MeleeAttackDmg);
	int get_RangedAttackDmg() const;
	void set_RangedAttackDmg(int _RangedAttackDmg);
	int get_ArmorDmgRed() const;
	void set_ArmorDmgRed(int _ArmorDmgRed);

};


#endif //EX02_CLAPTRAP_HPP
