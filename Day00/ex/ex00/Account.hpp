#ifndef Account_cpp
#define Account_cpp
#include <string>
#include <set>
#include <stdexcept>

class Account {
private:
    int id;
    std::string holder;
    double balance;
    double loan;
public:
    Account(int id, const std::string &holder, double balance);
    std::string getHolder() const;
    double getBalance() const;
    double getLoan() const;
    void setBalance(double amount);
    void setLoan(double amount);

    struct IdAndBalance {
        int id;
        double balance;
    };

    IdAndBalance getId() const;
};

#endif