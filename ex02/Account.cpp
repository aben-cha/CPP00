/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:05:09 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/17 00:38:29 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int Account::getTotalAmount( void ) {
    return _totalAmount;   
}

int Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}
int Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
    std::cout << "accounts:"    << getNbAccounts() 
              << ";total:"       << getTotalAmount() 
              << ";deposits:"    << getNbDeposits() 
              << ";withdrawals:" << getNbWithdrawals()
              << std::endl;
}

Account::Account( int initial_deposit ) {
    _accountIndex = 0;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    ++_nbAccounts;
}

Account::~Account( void ) {
    
}

void    Account::makeDeposit( int deposit ) {
    _amount += deposit;
    ++_nbDeposits;
    ++_totalNbDeposits;
}

bool    Account::makeWithdrawal( int withdrawal ) {
    if (_amount - withdrawal > 0)
    {
        _amount -= withdrawal;
        ++_nbWithdrawals;
        ++_totalNbWithdrawals;
        return true;
    }
    return false;
}

int     Account::checkAmount( void ) const {
    return _amount;
}

void    Account::displayStatus( void ) const {
    std::cout << "created" << std::endl;
    std::cout << "closed" << std::endl;
}


