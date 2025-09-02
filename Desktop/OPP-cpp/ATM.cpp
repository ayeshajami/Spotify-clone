#include <iostream>
using namespace std;

class ATM {
    double balance;

public:
    ATM(double b = 0) : balance(b) {}

    void checkBalance() {
        cout << "Current Balance: $" << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient funds!" << endl;
        else {
            balance -= amount;
            cout << "Withdrew $" << amount << endl;
        }
    }
};

int main() {
    ATM user(1000);
    int choice;
    double amount;

    do {
        cout << "\n--- ATM Menu ---\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1: user.checkBalance(); break;
            case 2: cout << "Enter amount: "; cin >> amount; user.deposit(amount); break;
            case 3: cout << "Enter amount: "; cin >> amount; user.withdraw(amount); break;
        }
    } while (choice != 4);

    return 0;
}
