#include "Bank.hpp"
#include <string>
#include <iostream>

Bank::Bank(double rate) : interestRate(rate), bankAccount(0.0) {}

std::vector<Account> Bank::getAccounts() const {
    return accounts;
}

double Bank::getBankAccount() const {
    return bankAccount;
}

void Bank::setBankBalance(double amount) {
    bankAccount = amount;
}

void Bank::addAccount(int id, const std::string &holder, double balance) {
    for (std::vector<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
        if (it->getId().id == id) {
            std::cout << "\n\n\nErro: Conta com o ID " << id << " já existe." <<std::endl;
            return;
        }
    }
    Account newAccount(id, holder, balance);
    accounts.push_back(newAccount);
}

void Bank::updateAccountBalance(int accountId, double newBalance) {
    for (std::vector<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
        if (it->getId().id == accountId) {
            double oldBalance = it->getBalance();

            double additionalAmount = newBalance - oldBalance;

            double interest = additionalAmount * interestRate;

            it->setBalance(newBalance - interest);
            bankAccount += interest;
        }
    }
}

void Bank::deleteAccount(int accountId) {
    for (std::vector<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
        if (it->getId().id == accountId) {
            accounts.erase(it);
            break;
        }
    }
}

void Bank::provideLoan(int accountId, double loanAmount) {
    double bankBalance = getBankAccount();
    for (std::vector<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
        if (it->getId().balance == accountId) {
            if (loanAmount <= bankBalance) {
                it->setLoan(loanAmount);
                it->setBalance(it->getBalance() + loanAmount);
                bankAccount -= loanAmount;
            } else {
                std::cout << "Valor do empréstimo maior que saldo disponível no banco." << std::endl;
            }
        }
    }
}
