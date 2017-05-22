//
// Created by Tony MACK on 2017/05/22.
//

#ifndef EX01_CONTACT_HPP
#define EX01_CONTACT_HPP


#include <string>

class Contact {
public:
	Contact();
	Contact(const std::string _sFname, const std::string _sLname, const std::string _sNname,
	        const std::string _slogin, const std::string _sPostalA, const std::string _sEmail, std::string _iPhoneNbr,
	        const std::string _sBdate, const std::string _sFavMeal, const std::string _sUnderwareCol,
	        const std::string _sDarkestSecret);

	virtual ~Contact();

	const std::string get_sFname() const;

	void set_sFname(const std::string _sFname);

	const std::string get_sLname() const;

	void set_sLname(const std::string _sLname);

	const std::string get_sNname() const;

	void set_sNname(const std::string _sNname);

	const std::string get_slogin() const;

	void set_slogin(const std::string _slogin);

	const std::string get_sPostalA() const;

	void set_sPostalA(const std::string _sPostalA);

	const std::string get_sEmail() const;

	void set_sEmail(const std::string _sEmail);

	const std::string get_iPhoneNbr() const;

	void set_iPhoneNbr(const std::string _iPhoneNbr);

	const std::string get_sBdate() const;

	void set_sBdate(const std::string _sBdate);

	const std::string get_sFavMeal() const;

	void set_sFavMeal(const std::string _sFavMeal);

	const std::string get_sUnderwareCol() const;

	void set_sUnderwareCol(const std::string _sUnderwareCol);

	const std::string get_sDarkestSecret() const;

	void set_sDarkestSecret(const std::string _sDarkestSecret);


private:

	std::string _sFname;
	std::string _sLname;
	std::string _sNname;
	std::string _slogin;
	std::string _sPostalA;
	std::string _sEmail;
	std::string _iPhoneNbr;
	std::string _sBdate;
	std::string _sFavMeal;
	std::string _sUnderwareCol;
	std::string _sDarkestSecret;
public:
	

};


#endif //EX01_CONTACT_HPP
