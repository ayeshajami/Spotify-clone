// bank.cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string name, double bal) {
        owner = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient funds\n";
        else
            balance -= amount;
    }

    void display() {
        cout << "Owner: " << owner << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc("Ali", 1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();

    return 0;
}
