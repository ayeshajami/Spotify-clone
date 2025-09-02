#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    string name;
    float price;
    Product(string n, float p) : name(n), price(p) {}
};

class Cart {
    vector<Product> items;

public:
    void addItem(string name, float price) {
        items.push_back(Product(name, price));
    }

    void showCart() {
        float total = 0;
        cout << "\nYour Cart:\n";
        for (auto p : items) {
            cout << "- " << p.name << ": $" << p.price << endl;
            total += p.price;
        }
        cout << "Total: $" << total << endl;
    }
};

int main() {
    Cart c;
    c.addItem("T-Shirt", 19.99);
    c.addItem("Shoes", 49.99);
    c.showCart();
    return 0;
}
