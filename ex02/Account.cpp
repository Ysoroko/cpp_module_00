/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:46:02 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/20 13:30:00 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ctime>

# include "Account.hpp"

// Static variables need to be given an initial value before using!
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	_nbAccounts++;
}

Account::~Account( void )
{
	_nbAccounts--;
}

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	std::cout <<  "test" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount < withdrawal)
		return (false);
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;

	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

// format: [19920104_091532]
// [year/month/day_hour/min/sec]
static void	display_time(void)
{
	const time_t	now = time(0);
	tm				*ltm = localtime(&now);

	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	// month starts at 0;
	std::cout << 1 + ltm->tm_mon;
	std::cout << ltm->tm_mday;
	std::cout << "_";
	std::cout << ltm->tm_hour;
	std::cout << ltm->tm_min;
	std::cout << ltm->tm_sec;
	std::cout << "] ";
}

void	Account::displayStatus( void ) const
{
	const time_t	now = time(0);
	tm				*ltm = localtime(&now);

	display_time();
	std::cout <<  _amount << std::endl;
}