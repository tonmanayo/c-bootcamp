//
// Created by tony on 2017/05/29.
//

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title) {
	std::cout << name + ", " << title + ", is born!\n";
}

Sorcerer::~Sorcerer() {
	std::cout << _name + ", " << _title + ", is dead. Consequences will never be the same !\n";

}

const std::string   &Sorcerer::get_name() const {
	return _name;
}

const std::string   &Sorcerer::get_title() const {
	return _title;
}

Sorcerer    &Sorcerer::operator=(Sorcerer const &rhs) {
	this->_name = rhs.get_name();
	this->_title = rhs.get_title();
	return *this;
}

void Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
	return ;
}

Sorcerer::Sorcerer() {

}

std::ostream    &operator<<(std::ostream & o, Sorcerer const & rhs)
{
	std::cout << "I am " << rhs.get_name() + ", " << rhs.get_title() << ", and I like ponies !" << std::endl;
	return (o);
}
