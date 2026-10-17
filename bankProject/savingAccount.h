# ifndef SAVINGACCOUNT_H
# define SAVINGACCOUNT_H
# include "account.h"

#include <iostream>
#include <string>

using namespace std;

class SavingAccount : public Account{
    private:
        double interestRate;

    public:
        SavingAccount(double initialBalance, double rate);

        double calculateInterst() const;

};
#endif
