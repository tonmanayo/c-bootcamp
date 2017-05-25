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

	bool operator>(Fixed const &rhs);
	bool operator<(Fixed const &rhs);
	bool operator>=(Fixed const &rhs);
	bool operator<=(Fixed const &rhs);
	bool operator==(Fixed const &rhs);
	bool operator!=(Fixed const &rhs);

	Fixed operator+(Fixed const &rhs);
	Fixed operator-(Fixed const &rhs);
	Fixed operator/(Fixed const &rhs);
	Fixed operator*(Fixed const &rhs);

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static Fixed &min(Fixed &fix1, Fixed &fix2);
	static Fixed &max(Fixed &fix1, Fixed &fix2);

	static Fixed const	&max(Fixed const &fix1, const Fixed &fix2);
	static Fixed const	&min(Fixed const &fix1, const Fixed &fix2);

	static int getIFbits();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	virtual ~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);




#endif //EX00_FIXED_HPP
