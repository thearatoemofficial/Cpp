#include <iostream>  // Library for input and output

using namespace std;

int main()  // Main function
{
    // Declare variables
    string name;
    int accountNumber;
    double initialBalance, deposit, withdrawal;
    double currentBalance, interest , finalBalance;

    //Input section
    cout << "Enter customer name: ";
    cin >> name;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    cout << "Enter deposit amount: ";
    cin >> deposit;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;

    // Step 1: Calculate current amount
    currentBalance = initialBalance + deposit - withdrawal;
    //Step 2: Calculate interest
    interest = currentBalance * 0.03;
    //Step 3: Calculate final balance
    finalBalance = currentBalance + interest;

    //Output section
    cout << "\n===== BANK ACCOUNT REPORT =====" <<endl;
    cout << "Customer Name   : " << name << endl;
    cout << "Account Number  : " << accountNumber << endl;

    cout << "----------------------------";
    cout << "\nInitial Balance  : $" << initialBalance << endl;
    cout << "Deposit Ammount    : $" << deposit << endl;
    cout << "Withdrawal Ammount : $" << withdrawal << endl;

    cout << "----------------------------";
    cout << "\nInterest (3%)    : $" << interest << endl;
    cout << "Final Amount       : $" << finalBalance << endl;


    return 0;  // End of program
}