// atm.cpp
#include <iostream>
using namespace std;

class ATM {
    int pin;
    float balance;

public:
    ATM(int p, float b) : pin(p), balance(b) {}

    bool checkPin(int p) { return p == pin; }

    void showBalance() { cout << "Balance: $" << balance << endl; }

    void withdraw(float amt) {
        if (amt > balance)
            cout << "Insufficient funds.\n";
        else {
            balance -= amt;
            cout << "Withdrawn: $" << amt << "\nNew Balance: $" << balance << endl;
        }
    }
};

int main() {
    ATM user(1234, 1000.0);
    int inputPin;
    cout << "Enter PIN: ";
    cin >> inputPin;

    if (!user.checkPin(inputPin)) {
        cout << "Incorrect PIN!\n";
        return 0;
    }

    int choice;
    do {
        cout << "\n1. Check Balance\n2. Withdraw\n0. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) user.showBalance();
        else if (choice == 2) {
            float amt;
            cout << "Enter amount: ";
            cin >> amt;
            user.withdraw(amt);
        }
    } while (choice != 0);

    return 0;
}
