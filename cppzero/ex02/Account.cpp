/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabir <msabir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:45:06 by msabir            #+#    #+#             */
/*   Updated: 2025/12/15 12:45:07 by msabir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(NULL);
    std::tm* tm = std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", tm);
    std::cout << buffer;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals()
              << std::endl;
}

void Account::makeDeposit(int deposit)
{
    int previous_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << previous_amount
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    int previous_amount = _amount;

    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout << " index:" << _accountIndex
                  << ";p_amount:" << previous_amount
                  << ";withdrawal:" << withdrawal
                  << ";refused"
                  << std::endl;
        return false;
    }

    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";p_amount:" << previous_amount
              << ";withdrawal:" << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals
              << std::endl;

    return true;
}

int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";created"
              << std::endl;
}

Account::~Account(void)
{
    _nbAccounts--;
    _totalAmount -= _amount;

    _displayTimestamp();
    std::cout << " index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed"
              << std::endl;
}
