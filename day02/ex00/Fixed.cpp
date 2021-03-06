//
// Created by Tony MACK on 2017/05/25.
//

#include "Fixed.hpp"


const int Fixed::iFbits = 8;

Fixed::Fixed() : iFValue(0) {
	std::cout << "Default Constructor called\n";
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy Constructor called\n";
	*this = fixed;
}

Fixed::~Fixed() {
	std::cout << "Deconstructor called\n";
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation Constructor called\n";
	if (this != &rhs){
		this->iFValue = rhs.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return this->iFValue;
}

void Fixed::setRawBits(int const raw) {
	this->iFValue = raw;
}