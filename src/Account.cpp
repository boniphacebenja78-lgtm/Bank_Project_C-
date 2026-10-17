#include "../include/Account.h"

#include <iostream>
#include <string>
using namespace std;

//constructor;
Account::Account(double initialBalance) : balance(initialBalance >= 0.0 ? initialBalance : 0.0) {
    if(initialBalance >= 0.0){
    } else {
        cout << "Error: Initial balance was invalid. set to 0.0." << endl;
    }
}

//credits: add amount of money tot he balance.
void Account:: credit(double amount){
    balance = balance + amount;
}
//debit ; removing money from alance but where is enough.
bool Account::debit (double amount){
    if(amount <= balance){
        balance = balance - amount;
        return true;
    } else {
        cout << " the amount exceeded the balance;" << endl;
        return false;
    }

}

double Account:: getBalance() const{
    return balance;
    
}

