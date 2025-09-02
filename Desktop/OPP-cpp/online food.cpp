#include <iostream>
using namespace std;

class FoodOrder {
    string foodName;
    double price;

public:
    FoodOrder(string f, double p) : foodName(f), price(p) {}

    void displayOrder() {
        cout << "Ordered: " << foodName << ", Price: $" << price << endl;
    }
};

int main() {
    FoodOrder order1("Burger", 5.99);
    FoodOrder order2("Pizza", 8.49);

    order1.displayOrder();
    order2.displayOrder();
    return 0;
}
