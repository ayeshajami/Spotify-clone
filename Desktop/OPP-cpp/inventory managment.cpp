// inventory.cpp
#include <iostream>
using namespace std;

class Item {
    string name;
    int quantity;
    float price;

public:
    void addItem() {
        cout << "Enter name, quantity, price: ";
        cin >> name >> quantity >> price;
    }

    void display() {
        cout << "Item: " << name << ", Quantity: " << quantity << ", Price: $" << price << endl;
    }
};

int main() {
    Item items[100];
    int count = 0, choice;

    do {
        cout << "\n1. Add Item\n2. Show All\n0. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            items[count].addItem();
            count++;
        }
        else if (choice == 2) {
            for (int i = 0; i < count; i++)
                items[i].display();
        }
    } while (choice != 0);

    return 0;
}
