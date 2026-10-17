#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "account.h" 

class CheckingAccount : public Account {
private:
    double overdraftLimit; 

public:
    // Constructor
    CheckingAccount(std::string accNum, double initialBalance, double limit);

    // Override the withdraw function (Polymorphism)
    void withdraw(double amount);
};

#endif