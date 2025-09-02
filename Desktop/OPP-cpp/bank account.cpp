// multiple_accounts.cpp
#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    float balance;

public:
    void setDetails(string n, int a, float b) {
        name = n;
        accNo = a;
        balance = b;
    }

    void display() {
        cout << "Name: " << name << ", Account #: " << accNo << ", Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount customers[3];

    customers[0].setDetails("Sara", 101, 2500);
    customers[1].setDetails("Usman", 102, 4300);
    customers[2].setDetails("Hina", 103, 3100);

    cout << "\n--- Bank Customers ---\n";
    for (int i = 0; i < 3; i++) {
        customers[i].display();
    }

    return 0;
}
