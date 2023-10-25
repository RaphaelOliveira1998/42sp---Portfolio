#include "Account.hpp"
#include <string>
#include <iostream>

Account::Account(int id, const std::string &holder, double balance) 
    : id(id), holder(holder), balance(balance), loan(0.0) {}

Account::IdAndBalance Account::getId() const {
    IdAndBalance result;
    result.id = id;
    result.balance = balance;
    return result;
}

std::string Account::getHolder() const {
    return holder;
}

double Account::getBalance() const {
    return balance;
}

double Account::getLoan() const {
    return loan;
}

void Account::setBalance(double amount) {
    balance = amount;
}

void Account::setLoan(double amount) {
    if (amount <= balance)
        loan = amount;
    else
        std::cout << "Valor do empréstimo não pode exceder o total da conta." << std::endl;
}

