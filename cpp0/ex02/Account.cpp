/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:21:46 by tzizi            #+#    #+#             */
/*   Updated: 2025/02/10 14:21:46 by tzizi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

static int  index=0;

Account::Account(int initial_deposit) : _accountIndex(index++), _amount(initial_deposit),
    _nbDeposits(0), _nbWithdrawals(0) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:"<< this->_amount <<
        ";created" << std::endl;
}

void    Account::_displayTimestamp( void ){
    struct tm dt;
    time_t  timestamp;
    char    formatedTimestamp[17];

    time(&timestamp);
    dt = *localtime(&timestamp);
    strftime(formatedTimestamp, 17 ,"[%Y%m%d_%H%M%S" , &dt);
    std::cout << formatedTimestamp << "] ";
    return ;
}

Account::~Account(){
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<
        ";closed" << std::endl;
}

int Account::_nbAccounts = 8;
int Account::_totalAmount = 20049;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int  Account::getNbAccounts( void ){
    return Account::_nbAccounts;
}

int  Account::getTotalAmount( void ){
    return Account::_totalAmount;
}

int  Account::getNbDeposits( void ){
    return Account::_totalNbDeposits;
}

int  Account::getNbWithdrawals( void ){
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:"<< Account::getTotalAmount() <<
        ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
    return ;
}

void    Account::makeDeposit( int deposit ){
    int p_amount;

    _displayTimestamp();
    p_amount = checkAmount();
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount <<
        ";deposit:" <<  deposit << ";amount:" << this->_amount <<
        ";nb_deposits:" << this->_nbDeposits << std::endl;
    return ;
}

bool    Account::makeWithdrawal( int withdrawal ){
    int p_amount;

    _displayTimestamp();
    p_amount = checkAmount();
    if (withdrawal <= this->_amount){
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        std::cout << "index:" << this->_accountIndex << ";p_amount:" <<
            p_amount << ";withdrawal:" << withdrawal <<
            ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount <<
        ";withdrawal:refused" << std::endl;
    return false;
}

int Account::checkAmount( void ) const{
    return this->_amount;
}

void    Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:"<< this->_amount <<
        ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
    return ;
}
