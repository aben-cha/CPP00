/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:05:09 by aben-cha          #+#    #+#             */
/*   Updated: 2024/09/17 23:11:33 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
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
    _displayTimestamp();
    std::cout << "accounts:"    <<  getNbAccounts() 
              << ";total:"       << getTotalAmount() 
              << ";deposits:"    << getNbDeposits() 
              << ";withdrawals:" << getNbWithdrawals()
              << std::endl;
}

Account::Account( int initial_deposit ) {
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:"    <<  _accountIndex
              << ";amount:"   << _amount 
              << ";created" << std::endl;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:"    <<  _accountIndex
              << ";amount:"   << _amount 
              << ";closed" << std::endl;
}

void    Account::makeDeposit( int deposit ) {
    _amount += deposit;
    ++_nbDeposits;
    ++_totalNbDeposits;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:"        <<  _accountIndex
              << ";p_amount:"    << _amount - deposit
              << ";deposit:"     << deposit
              << ";amount:"       << _amount
              << ";nb_deposits:"     << _nbDeposits
              << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal ) {
    int flag;

    flag = 0;
    if (_amount - withdrawal < 0)
        flag = 1;
    _displayTimestamp();
    std::cout << "index:"        <<  _accountIndex
              << ";p_amount:"    << _amount;
    if (!flag)
    {
        ++_nbWithdrawals;
        ++_totalNbWithdrawals;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
    }
    if (flag)
    {
        std::cout << ";withdrawal:" << "refused" << std::endl;
        return false;
    }
    std::cout << ";withdrawal:" << withdrawal
              << ";amount:"       << _amount
              << ";nb_withdrawals:"     << _nbDeposits
              << std::endl;
    return true;
}

int     Account::checkAmount( void ) const {
    return _amount;
}

void    Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:"        <<  _accountIndex
              << ";amount:"       << _amount 
              << ";deposits:"     << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals;
    std::cout << "\n";
}

void	Account::_displayTimestamp( void ) {
    
    char buffer[80];
    
    std::time_t currentTime = std::time(0);
    std::tm* localTime = std::localtime(&currentTime);
    
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localTime);
    std::cout << "[" << buffer << "] ";    
}
