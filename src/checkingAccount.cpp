#include "../checkingAccount.h"
#include <iostream>
#include <string>

//constructor
CheckingAccount::CheckingAccount(string accNum, double initialBalance, double limit)
    : Account(accNum, initialBalance)
{
    overdraftLimit = limit;
}

// Override base class behaviour
void CheckingAccount::withdraw(double amount) {
    if (amount <= balance + overdraftLimit) {
        balance -= amount;
        std::cout << "Withdrew " << amount << " from Checking.\n";
    } else {
        std::cout << "Overdraft limit exceeded.\n";
    }
}