/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:41:23 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/10 19:29:12 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
	char str[16];
	time_t	n;
	tm		*x;
	
	n = time(NULL);
	x = localtime(&n);
	strftime( str, 16, "%Y%m%d_%H%M%S", x);
	std::cout << "[" << str << "] ";
}

Account::Account(int initial_deposit )
{
	Account::_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";closed" << std::endl;
}
int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

int		Account::checkAmount( void ) const
{
	return (Account::_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	std::cout << ";deposit:" << deposit;
	Account::_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << Account::_amount;
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";nb_deposits:" << Account::_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	if (Account::_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal;
	Account::_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << ";amount:" << Account::_amount;
	Account::_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
	return (true);
}