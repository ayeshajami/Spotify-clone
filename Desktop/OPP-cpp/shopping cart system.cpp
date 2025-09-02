#include <iostream>
using namespace std;

class Item {
public:
    string name;
    float price;
    int quantity;

    Item(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    float total() {
        return price * quantity;
    }

    void display() {
        cout << name << " x " << quantity << " = $" << total() << endl;
    }
};

int main() {
    Item item1("T-Shirt", 15.5, 2);
    Item item2("Jeans", 40.0, 1);

    float grandTotal = item1.total() + item2.total();

    item1.display();
    item2.display();
    cout << "Total Bill: $" << grandTotal << endl;

    return 0;
}
