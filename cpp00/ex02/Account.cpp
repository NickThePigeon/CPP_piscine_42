/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nduijf <nduijf@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/02 13:05:45 by nduijf        #+#    #+#                 */
/*   Updated: 2022/03/06 18:33:14 by nduijf        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}
void	Account::makeDeposit( int deposit )
{
	int old_amount;

	old_amount = Account::_amount;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"<< old_amount;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	int old_amount;

	if (withdrawal < Account::_amount)
	{
		old_amount = Account::_amount;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:"<< old_amount;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:"<< this->_accountIndex;
		std::cout << ";p_amount:"<< this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
}
int		Account::checkAmount( void ) const
{
	return (this->_amount > 0);
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex;
	std::cout << ";amount:"<< this->_amount << ";deposits:";
	std::cout << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;	
}

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::string str(30, '\0');
    std::strftime(&str[0], str.size(), "%Y%m%d_%H%M%S", std::localtime(&now));
	std::cout << "[" << str << "] ";
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:"<< this->_accountIndex;
	std::cout << ";amount:"<< this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	return ;	
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex;
	std::cout << ";amount:"<< this->_amount << ";closed" << std::endl;
	return ;	
}
