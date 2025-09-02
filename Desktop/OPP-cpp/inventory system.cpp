#include <iostream>
#include <vector>
using namespace std;

struct Item {
    string name;
    int quantity;
};

class Inventory {
    vector<Item> items;

public:
    void addItem(string n, int q) {
        items.push_back({n, q});
    }

    void searchItem(string keyword) {
        for (auto item : items) {
            if (item.name == keyword) {
                cout << "Item Found: " << item.name << " (" << item.quantity << " available)" << endl;
                return;
            }
        }
        cout << "Item not found!\n";
    }
};

int main() {
    Inventory store;
    store.addItem("Pen", 20);
    store.addItem("Notebook", 10);

    store.searchItem("Pen");
    store.searchItem("Pencil");

    return 0;
}
