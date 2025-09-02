// bank_account.cpp
#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accountNumber;
    float balance;

public:
    BankAccount(string n, int accNo, float bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: $" << amount << "\nNew Balance: $" << balance << endl;
    }

    void withdraw(float amount) {
        if (amount > balance)
            cout << "Insufficient funds!\n";
        else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << "\nNew Balance: $" << balance << endl;
        }
    }

    void showDetails() {
        cout << "\nAccount Holder: " << name
             << "\nAccount Number: " << accountNumber
             << "\nBalance: $" << balance << endl;
    }
};

int main() {
    BankAccount b("Ali Khan", 1001, 5000.0);
    int choice;
    float amt;

    do {
        cout << "\n1. Show Details\n2. Deposit\n3. Withdraw\n0. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) b.showDetails();
        else if (choice == 2) {
            cout << "Enter amount: ";
            cin >> amt;
            b.deposit(amt);
        }
        else if (choice == 3) {
            cout << "Enter amount: ";
            cin >> amt;
            b.withdraw(amt);
        }
    } while (choice != 0);

    return 0;
}
