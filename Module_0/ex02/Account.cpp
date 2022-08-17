#include <iostream>
#include <string>
#include <ctime>
#include "Account.hpp"

typedef std::string	str;

//int	_nbAccounts = 0;
//int	_totalAmount = 0;
//int	_totalNbDeposits = 0;
//int	_totalNbWithdrawals = 0;

Account::Account(){}

Account::~Account(){}

void	Account::_displayTimestamp(void)
{
	std::cout << time(NULL);
}

int	Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount" << this->_amount << ";";
	std::cout << "deposit" << deposit << ";";
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	Account::_totalAmount += this->_amount;
	std::cout << "amount" << this->_amount << ";";
	std::cout << "nb_deposits" << this->_nbDeposits << ";";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_amount << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused";
		return false;
	}
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	Account::_totalAmount -= this->_amount;
	std::cout << "";
}
