#include <iostream>
using namespace std;

class FoodOrder {
private:
    string itemName;
    int quantity;
    float pricePerItem;

public:
    FoodOrder(string item, int qty, float price) {
        itemName = item;
        quantity = qty;
        pricePerItem = price;
    }

    float calculateTotal() {
        return quantity * pricePerItem;
    }

    void displayOrder() {
        cout << "Order: " << itemName
             << "\nQuantity: " << quantity
             << "\nTotal Price: $" << calculateTotal() << endl;
    }
};

int main() {
    FoodOrder order("Burger", 2, 5.99);
    order.displayOrder();

    return 0;
}
