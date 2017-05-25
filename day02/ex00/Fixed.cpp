//
// Created by Tony MACK on 2017/05/25.
//

#include "Fixed.hpp"

Fixed::Fixed() const : iFValue(0) {}

Fixed::~Fixed() {

}

Fixed::Fixed(Fixed & const fixed) const {

}

int Fixed::getIFValue() const {
	return iFValue;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	if (this != &rhs){
		this->iFValue = rhs.getIFValue();
	}
	return *this;
}


