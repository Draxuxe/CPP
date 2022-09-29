/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:05:00 by lfilloux          #+#    #+#             */
/*   Updated: 2022/09/29 11:00:57 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account ()
{
	Account::_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";" << "deposits:";
	std::cout << _nbDeposits << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
}

Account::~Account ()
{
	Account::_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";" << "closed" << std::endl;
}

Account::Account (int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	Account::_displayTimestamp ();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";" << "created" << std::endl;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts += 1;
}

int Account::getNbAccounts ()
{
	return (_nbAccounts);
}

int Account::getTotalAmount ()
{
	return (_totalAmount);
}

int Account::getNbDeposits ()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals ()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos ()
{
	Account::_displayTimestamp ();
	std::cout << "accounts:" << _nbAccounts << ";total:";
	std::cout << _totalAmount << ";" << "deposits:";
	std::cout << _totalNbDeposits << ";withdrawals:";
	std::cout << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit (int deposit)
{
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << p_amount;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal (int withdrawal)
{
	int	p_amount;

	Account::_displayTimestamp();
	if (_amount - withdrawal > 0)
	{
		p_amount = _amount;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;
		_nbWithdrawals += 1;
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << p_amount;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (1);
	}
	else
	{
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawals:refused" << std::endl;
		return (0);
	}
}

int Account::checkAmount () const
{
	if (_amount > 0)
		return (0);
	return (1);
}

void Account::displayStatus () const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp ()
{
	std::time_t now;
	struct tm *local;

	now = 0;
	time(&now);
	local = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + local->tm_year;
	if (local->tm_mon < 9)
		std::cout << "0" << 1 + local->tm_mon;
	else
		std::cout << 1 + local->tm_mon;
	if (local->tm_mday < 10)
		std::cout << "0" << local->tm_mday;
	else
		std::cout << local->tm_mday;
	std::cout << "_";
	if (local->tm_hour < 10)
		std::cout << "0" << local->tm_hour;
	else
		std::cout << local->tm_hour;
	if (local->tm_min < 10)
		std::cout << "0" << 1 + local->tm_min;
	else
		std::cout << 1 + local->tm_min;
	if (local->tm_sec < 10)
		std::cout << "0" << 1 + local->tm_sec;
	else
		std::cout << 1 + local->tm_sec;
	std::cout << "] ";
}
