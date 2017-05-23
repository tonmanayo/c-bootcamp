//
// Created by Tony MACK on 2017/05/22.
//

#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(){}

Contact::Contact(const std::string _asFname, const std::string _asLname, const std::string _asNname,
                 const std::string _aslogin, const std::string _asPostalA, const std::string _asEmail, const std::string _aiPhoneNbr,
                 const std::string _asBdate, const std::string _asFavMeal, const std::string _asUnderwareCol,
                 const std::string _asDarkestSecret) : _sFname(_asFname), _sLname(_asLname), _sNname(_asNname),
                                                       _slogin(_aslogin), _sPostalA(_asPostalA), _sEmail(_asEmail),
                                                       _iPhoneNbr(_aiPhoneNbr), _sBdate(_asBdate), _sFavMeal(_asFavMeal),
                                                       _sUnderwareCol(_asUnderwareCol),
                                                       _sDarkestSecret(_asDarkestSecret) {}

Contact::~Contact() {
	
}


const std::string Contact::get_sFname() const {
	return _sFname;
}

void Contact::set_sFname(const std::string _sFname) {
	this->_sFname = _sFname;
}

const std::string Contact::get_sLname() const {
	return _sLname;
}

void Contact::set_sLname(const std::string _sLname) {
	this->_sLname = _sLname;
}

const std::string Contact::get_sNname() const {
	return _sNname;
}

void Contact::set_sNname(const std::string _sNname) {
	this->_sNname = _sNname;
}

const std::string Contact::get_slogin() const {
	return _slogin;
}

void Contact::set_slogin(const std::string _slogin) {
	this->_slogin = _slogin;
}

const std::string Contact::get_sPostalA() const {
	return _sPostalA;
}

void Contact::set_sPostalA(const std::string _sPostalA) {
	this->_sPostalA = _sPostalA;
}

const std::string Contact::get_sEmail() const {
	return _sEmail;
}

void Contact::set_sEmail(const std::string _sEmail) {
	this->_sEmail = _sEmail;
}

const std::string Contact::get_iPhoneNbr() const {
	return _iPhoneNbr;
}

void Contact::set_iPhoneNbr(const std::string _iPhoneNbr) {
	this->_iPhoneNbr = _iPhoneNbr;
}

const std::string Contact::get_sBdate() const {
	return _sBdate;
}

void Contact::set_sBdate(const std::string _sBdate) {
	this->_sBdate = _sBdate;
}

const std::string Contact::get_sFavMeal() const {
	return _sFavMeal;
}

void Contact::set_sFavMeal(const std::string _sFavMeal) {
	this->_sFavMeal = _sFavMeal;
}

const std::string Contact::get_sUnderwareCol() const {
	return _sUnderwareCol;
}

void Contact::set_sUnderwareCol(const std::string _sUnderwareCol) {
	this->_sUnderwareCol = _sUnderwareCol;
}

const std::string Contact::get_sDarkestSecret() const {
	return _sDarkestSecret;
}

void Contact::set_sDarkestSecret(const std::string _sDarkestSecret) {
	this->_sDarkestSecret = _sDarkestSecret;
}
