#include <iostream>
#include <vector>
using namespace std;

class Vehicle {
private:
    string brand;
    string model;
    int year;
public:
    Vehicle(string b, string m, int y) : brand(b), model(m), year(y) {}
    void display() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
    string getModel() { return model; }
};

int main() {
    vector<Vehicle> inventory;
    inventory.push_back(Vehicle("Toyota", "Corolla", 2020));
    inventory.push_back(Vehicle("Ford", "Mustang", 2022));
    inventory.push_back(Vehicle("Tesla", "Model 3", 2023));

    cout << "\nVehicle Inventory:\n";
    for (auto& v : inventory) v.display();

    return 0;
}
