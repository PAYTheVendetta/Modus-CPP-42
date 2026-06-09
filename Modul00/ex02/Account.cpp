/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:41:23 by aialonso          #+#    #+#             */
/*   Updated: 2026/06/09 17:46:56 by aialonso         ###   ########.fr       */
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
	std::cout << str << " ";
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
	Account::_accountIndex = NULL;
	Account::_nbAccounts--;
	Account::_totalAmount -= Account::_amount;
	Account::_amount = NULL;
}

/* [19920104_091532] index:0;amount:47;closed */