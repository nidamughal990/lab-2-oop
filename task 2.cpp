#include <iostream>
#include "BankAccount.h"
using namespace std;
int main() {
    // User-defined values for account creation
    string accountNumber;
    string accountHolder;
    double balance;

    cout << "Enter Account Number: ";
    cin>>accountNumber;
    cout << "Enter Account Holder Name: ";
  cin>>accountHolder;
    cout << "Enter Initial Balance: ";
    cin >> balance;

    // Creating an object of BankAccount
    BankAccount account(accountNumber, accountHolder, balance);

    // Displaying account details
    std::cout << "Account Details:" <<endl;
    account.showAccountDetails();

    return 0;
}