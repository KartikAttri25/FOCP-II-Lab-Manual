#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Function to input account details
    void inputDetails()
    {
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to deposit money
    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
    }

    // Function to withdraw money
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        }
    }

    // Function to display account details
    void displayDetails()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Account Number      : " << accountNumber << endl;
        cout << "Current Balance     : " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    double depositAmount, withdrawAmount;

    b.inputDetails();

    cout << "\nEnter Amount to Deposit: ";
    cin >> depositAmount;
    b.deposit(depositAmount);

    cout << "Enter Amount to Withdraw: ";
    cin >> withdrawAmount;
    b.withdraw(withdrawAmount);

    b.displayDetails();

    return 0;
}
