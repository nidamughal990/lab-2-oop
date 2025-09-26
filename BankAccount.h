#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountNumber;  
    string accountHolder; 
    double balance;             

public:
    // Parameterized constructor
    BankAccount(string accNumber, string accHolder, double initialBalance) {
        accountNumber = accNumber;
        accountHolder = accHolder;
        balance = initialBalance;
    }

    // Method to display account details
    void showAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};
