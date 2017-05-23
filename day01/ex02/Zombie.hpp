//
// Created by Tony MACK on 2017/05/23.
//

#ifndef EX02_ZOMBIES_HPP
#define EX02_ZOMBIES_HPP


#include <string>

class Zombie {

private:
	std::string type;
	std::string name;

public:
	void announce();

	Zombie(const std::string &type, const std::string &name);

	virtual ~Zombie();

	const std::string &getType() const;

	void setType(const std::string &type);

	const std::string &getName() const;

	void setName(const std::string &name);

};


#endif //EX02_ZOMBIES_HPP
