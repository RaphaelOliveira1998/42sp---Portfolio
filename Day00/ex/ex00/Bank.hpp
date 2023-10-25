#ifndef Bank_hpp
#define Bank_hpp

#include "Account.hpp"
#include <string>
#include <vector>

class Bank {
private:
	double interestRate;
	double bankAccount;
	std::vector<Account> accounts;
public:
	Bank(double rate);
	void setBankBalance(double amount);
	double getBankAccount() const;
	std::vector<Account> getAccounts() const;
	void addAccount(int id, const std::string &holder, double balance);
	void updateAccountBalance(int accountId, double newBalance);
	void deleteAccount(int accountId);
	void provideLoan(int accountId, double loanAmount);
};

#endif 