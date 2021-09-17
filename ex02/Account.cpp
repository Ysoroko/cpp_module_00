/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:46:02 by ysoroko           #+#    #+#             */
/*   Updated: 2021/09/17 15:15:08 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Account.hpp"

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
}

Account::~Account( void )
{
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
