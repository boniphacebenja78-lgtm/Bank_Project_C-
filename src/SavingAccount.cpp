#include "../SavingAccount.h"

using namespace std;

SavingAccount::SavingAccount(double initialBalance, double rate)
    : Account(initialBalance), interestRate(rate) {}

double SavingAccount::calculateInterest() const{
    return interestRate * balance;
    
}
