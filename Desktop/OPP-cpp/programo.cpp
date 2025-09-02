#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    float balance;

public:
    BankAccount(string name, int number, float initialBalance) {
        accountHolder = name;
        accountNumber = number;
        balance = initialBalance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    void withdraw(float amount) {
        if (amount > balance)
            cout << "Insufficient funds!" << endl;
        else {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        }
    }

    void showInfo() {
        cout << "\nAccount Holder: " << accountHolder
             << "\nAccount No.: " << accountNumber
             << "\nBalance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("Ali Khan", 123456, 5000);

    acc.deposit(1500);
    acc.withdraw(2000);
    acc.showInfo();

    return 0;
}
