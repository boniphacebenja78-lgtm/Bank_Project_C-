#include <iostream>
#include "../savingAccount.h"
#include "../checkingAccount.h"

using namespace std;

int main() {
    cout << "--- Creating Accounts ---\n";

    // 1. Test SavingsAccount
    // Initial balance: $1000, Interest Rate: 5% (0.05)
    SavingsAccount mySavings(1000.0, 0.05); 
    
    // 2. Test CheckingAccount
    // Initial balance: $500, Fee: $2.50 per transaction
    CheckingAccount myChecking(500.0, 2.50);

    cout << "\n--- Testing Savings Account ---\n";
    cout << "Start Balance: $" << mySavings.getBalance() << "\n";
    
    // Calculate interest
    double interestEarned = mySavings.calculateInterest();
    cout << "Interest earned: $" << interestEarned << "\n";
    
    // Add it to the account
    mySavings.credit(interestEarned);
    cout << "New Balance after Interest: $" << mySavings.getBalance() << "\n";


    cout << "\n--- Testing Checking Account ---\n";
    cout << "Start Balance: $" << myChecking.getBalance() << "\n";
    
    // Credit $100. Fee should be applied.
    cout << "Crediting $100...\n";
    myChecking.credit(100.0); 
    // Math: 500 + 100 - 2.50 = 597.50
    cout << "Balance after credit: $" << myChecking.getBalance() << "\n";

    // Debit $200. Fee should be applied.
    cout << "Debiting $200...\n";
    myChecking.debit(200.0);
    // Math: 597.50 - 200 - 2.50 = 395.00
    cout << "Balance after debit: $" << myChecking.getBalance() << "\n";

    // Try to Debit too much (should fail, no fee charged)
    cout << "Trying to Debit $1000 (should fail)...\n";
    myChecking.debit(1000.0);
    cout << "Balance after failed debit: $" << myChecking.getBalance() << "\n";

    return 0;
}