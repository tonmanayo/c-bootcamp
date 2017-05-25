//
// Created by Tony MACK on 2017/05/25.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP


class Fixed {
private:
	int iFValue;
	static const int iFbits;
public:
	Fixed() const;
	Fixed(Fixed & const fixed) const ;

	Fixed &operator=(Fixed const &rhs);

	int getIFValue() const;


	virtual ~Fixed();
};


#endif //EX00_FIXED_HPP
