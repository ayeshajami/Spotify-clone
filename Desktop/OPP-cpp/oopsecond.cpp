#include <iostream>
using namespace std;

class SubmarineSandwich {
private:
    string breadType;
    string meatType;
    string cheese;
    string vegetable;
    bool toasted;
    double price;

public:
    // Constructor
    SubmarineSandwich() {
        breadType = "";
        meatType = "";
        cheese = "";
        vegetable = "";
        toasted = false;
        price = 0.0;
    }

    // Setters
    void setBreadType(string b) {
        breadType = b;
    }

    void setMeatType(string m) {
        meatType = m;
    }

    void setCheese(string c) {
        cheese = c;
    }

    void setVegetable(string v) {
        vegetable = v;
        price += 1.0; // extra charge
    }

    void setToasted(bool t) {
        toasted = t;
        if (t) price += 1.5;
    }

    void setPrice(double p) {
        price = p;
    }

    // Getters
    string getBreadType() {
        return breadType;
    }

    string getMeatType() {
        return meatType;
    }

    string getCheese() {
        return cheese;
    }

    string getVegetable() {
        return vegetable;
    }

    bool getToasted() {
        return toasted;
    }

    double getPrice() {
        return price;
    }

    // Display
    void displayDetails() {
        cout << "Submarine Sandwich Details:\n";
        cout << "Bread Type: " << getBreadType() << endl;
        cout << "Meat Type: " << getMeatType() << endl;
        cout << "Cheese: " << getCheese() << endl;
        cout << "Vegetable: " << getVegetable() << endl;
        cout << "Toasted: " << (getToasted() ? "Yes" : "No") << endl;
        cout << "Price: $" << getPrice() << endl;
    }
};

int main() {
    SubmarineSandwich mySandwich;
    mySandwich.setBreadType("Whole Wheat");
    mySandwich.setMeatType("Turkey");
    mySandwich.setCheese("Cheddar");
    mySandwich.setVegetable("Lettuce, Tomato");
    mySandwich.setToasted(true);
    mySandwich.setPrice(5.00); // base price

    mySandwich.displayDetails();

    return 0;
}
