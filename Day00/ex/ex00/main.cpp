#include <iostream>
#include <utility>
#include "Bank.hpp"

void printInfo(const std::vector<Account> &accounts, const std::string &extraInfo, double bankAccount) {
   	std::cout << "\n\n\n\nAção -> " << extraInfo << ":" << std::endl;
	for (std::vector<Account>::const_iterator it = accounts.begin(); it != accounts.end(); ++it) {
   	    const Account &account = *it;
		Account::IdAndBalance idAndBalance = account.getId();
		int accountId = idAndBalance.id;
   	    std::cout << "Account Holder: " << account.getHolder() << std::endl;
		std::cout << "Account ID: " << accountId << std::endl;
        std::cout << "Account Balance: " << account.getBalance() << std::endl;
   	    std::cout << "Account Loan: " << account.getLoan() << std::endl;
   	    std::cout << "-----------------------" << std::endl;
	} 
	std::cout << "Saldo do banco: " << bankAccount << std::endl;
}

int main()	{
	Bank bank(0.05);
	
	std::cout << "\n\n\nAdicionando contas..." << std::endl;
	bank.addAccount(1, "Maria", 1000.0);
	bank.addAccount(2, "Eduarda", 1500.0);
	bank.addAccount(3, "Julia", 1500.0);

	bank.setBankBalance(10000.0);

	std::vector<Account> accounts;
	printInfo(bank.getAccounts(), "Check.\n", bank.getBankAccount());
	
	std::cout << "\n\n\nAtualizando saldo em conta..." << std::endl;
	bank.updateAccountBalance(1, 1200.0);
	printInfo(bank.getAccounts(), "Check.\n", bank.getBankAccount());
	
	std::cout << "\n\n\nAnalisando proposta de empréstimo..." << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "-----------------------" << std::endl;
	bank.provideLoan(2, 15000.0);
	printInfo(bank.getAccounts(), "Erro ao fornecer empréstimo.", bank.getBankAccount());

	std::cout << "\n\n\nDeletando conta do sistema..." << std::endl;
	bank.deleteAccount(1);
	printInfo(bank.getAccounts(), "Check.\n", bank.getBankAccount());

	return 0;
}
