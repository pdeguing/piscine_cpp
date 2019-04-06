/**
 * File              : Account.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 06.04.2019
 * Last Modified Date: 06.04.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Account.class.hpp"
#include <iostream>

int	_nbAccounts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	(void)initial_deposit;
	return ;
}

Account::~Account(void) {
	return ;
}

int	Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	std::cout << "displayAccountsInfos" << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit) {
	(void)deposit;
	std::cout << "makeDeposit" << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {
	(void)withdrawal;
	std::cout << "makeWithdrawals" << std::endl;
	return true;
}

int	Account::checkAmount(void) const {
	return 0;
}

void	Account::displayStatus(void) const {
	std::cout << "displayStatus" << std::endl;
	return ;
}

void	Account::_displayTimestamp(void) {
	std::cout << "_displayTimestamp" << std::endl;
	return ;
}

Account::Account(void) {
	return ;
}
