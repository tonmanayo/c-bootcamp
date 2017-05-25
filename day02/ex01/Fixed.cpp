//
// Created by Tony MACK on 2017/05/25.
//

#include <math.h>
#include "Fixed.hpp"


const int Fixed::iFbits = 8;

Fixed::Fixed() : iFValue(0) {
	std::cout << "Default Constructor called\n";
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy Constructor called\n";
	*this = fixed;
}

Fixed::Fixed(const float iNum) {
	std::cout << "Float Constructor called\n";
	this->iFValue = (int)round(iNum * pow(2, iFbits)) ;
	return ;
}

Fixed::Fixed(const int iNum) {
	std::cout << "Int Constructor called\n";
	this->iFValue = (int)round(iNum * pow(2, iFbits));
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

float Fixed::toFloat(void) const {
	return (this->iFValue  / pow(2, iFbits));
}

int Fixed::toInt(void) const {
	return (int)(this->iFValue  / pow(2, iFbits));
}

int Fixed::getIFbits() {
	return iFbits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {

	float temp;
	temp = ((float)rhs.getRawBits() / pow(2, Fixed::getIFbits()));
	o << temp ;
	return o;
}