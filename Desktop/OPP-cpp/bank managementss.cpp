#include <iostream>
#include <fstream>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    double balance;

public:
    BankAccount(string n, int a, double b) {
        name = n;
        accNo = a;
        balance = b;
    }

    void saveToFile() {
        ofstream out("accounts.txt", ios::app);
        out << name << " " << accNo << " " << balance << endl;
        out.close();
        cout << "Account saved!\n";
    }

    void display() {
        cout << "Name: " << name << ", Account No: " << accNo << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1("Ali", 101, 10000);
    acc1.display();
    acc1.saveToFile();
    return 0;
}
