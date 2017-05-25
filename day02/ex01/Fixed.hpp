//
// Created by Tony MACK on 2017/05/25.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>

class Fixed {
private:
	int iFValue;
	static const int iFbits;
public:
	Fixed();

	Fixed(const int iNum);

	Fixed(const float iNum);

	Fixed(const Fixed &fixed);

	Fixed &operator=(Fixed const &rhs);

	static int getIFbits();

	int getRawBits( void ) const;

	void setRawBits( int const raw );

	float toFloat( void ) const;

	int toInt( void ) const;


	virtual ~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);


//std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif //EX00_FIXED_HPP
