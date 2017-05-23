// dont mark, not my work

#include <iostream>
#include <iomanip>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {

	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_totalAmount += this->_amount;
	Account::_nbAccounts += 1;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return;
}

int	Account::getNbAccounts(void) {
	return _nbAccounts;
}

int	Account::getTotalAmount(void) {
	return _totalAmount;
}

int	Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(0);
	struct tm * now = localtime( & t );
	std::cout << '[' << (now->tm_year + 1900)
	          << std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
	          << std::setw(2) << std::setfill('0') << now->tm_mday
	          << '_'
	          << std::setw(2) << std::setfill('0') << now->tm_hour
	          << std::setw(2) << std::setfill('0') << now->tm_min
	          << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}




void	Account::makeDeposit( int deposit ) {


	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << ( this->_amount + deposit) << ";nb_deposits:" << (this->_nbDeposits + 1) << std::endl;

	this->_amount += deposit;
	this->_nbDeposits += 1;

	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	if ((this->_amount - withdrawal) < 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << ( this->_amount - withdrawal) << ";nb_withdrawals:" << (this->_nbWithdrawals + 1) << std::endl;


	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;

	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	return true;
}

int		Account::checkAmount( void ) const {
	return 0;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::Account(void) {
	return;
}