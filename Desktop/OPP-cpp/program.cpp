#include <iostream>
#include <string>
using namespace std;

class Pizza {
private:
    // Private data members
    string size;
    string toppings;
    float price;
    string thickness;
    bool extraToppings;

public:
    // Constructor to initialize pizza details
    Pizza(string s, string t, float p, string th, bool extra) {
        size = s;
        toppings = t;
        price = p;
        thickness = th;
        extraToppings = extra;
    }

    // Function to display pizza information
    void displayInfo() {
        cout << "\n--- Pizza Details ---" << endl;
        cout << "Size: " << size << endl;
        cout << "Toppings: " << toppings << endl;
        cout << "Price: $" << price << endl;
        cout << "Thickness: " << thickness << endl;
        cout << "Extra Toppings: " << (extraToppings ? "Yes" : "No") << endl;
    }
};

// Main function
int main() {
    string size, toppings, thickness;
    float price;
    char extra;

    cout << "Enter Pizza Size (Small/Medium/Large): ";
    cin >> size;

    cout << "Enter Toppings: ";
    cin.ignore(); // To clear newline from buffer
    getline(cin, toppings);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Thickness (Thin/Regular/Thick): ";
    cin >> thickness;

    cout << "Do you want extra toppings? (y/n): ";
    cin >> extra;

    bool hasExtra = (extra == 'y' || extra == 'Y');

    // Create pizza object using constructor
    Pizza myPizza(size, toppings, price, thickness, hasExtra);

    // Display pizza info
    myPizza.displayInfo();

    return 0;
}
