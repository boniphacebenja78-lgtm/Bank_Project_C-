#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account {
    protected:
        double balance;

    public:
        Account(double initialBalance);

        void credit(double amount);

        bool debit(double amount);

        double getBalance() const;

};

#endif
