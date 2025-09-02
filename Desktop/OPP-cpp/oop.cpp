#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string LicensePlate_No;
    string Model_No;
    string Type;
    string Color;

public:
    // Default constructor
    Vehicle() {
        LicensePlate_No = "Not Assigned";
        Model_No = "Not Assigned";
        Type = "Not Assigned";
        Color = "Not Assigned";
    }

    // Parameterized constructor
    Vehicle(string plate, string model, string type, string color) {
        LicensePlate_No = plate;
        Model_No = model;
        Type = type;
        Color = color;
    }

    // Setters
    void setLicensePlate_No(string plate) { LicensePlate_No = plate; }
    void setModel_No(string model) { Model_No = model; }
    void setType(string type) { Type = type; }
    void setColor(string color) { Color = color; }

    // Getters
    string getLicensePlate_No() { return LicensePlate_No; }
    string getModel_No() { return Model_No; }
    string getType() { return Type; }
    string getColor() { return Color; }

    // Functions
    void RegisterVehicle() {
        cout << "\nVehicle Registered Successfully.\n";
        display();
    }

    void UpdateVehicle() {
        string input;
        cout << "Enter new License Plate No: ";
        cin >> input;
        setLicensePlate_No(input);

        cout << "Enter new Model No: ";
        cin >> input;
        setModel_No(input);

        cout << "Enter new Type: ";
        cin >> input;
        setType(input);

        cout << "Enter new Color: ";
        cin >> input;
        setColor(input);

        cout << "\nVehicle Updated Successfully.\n";
        display();
    }

    void DeleteVehicle() {
        LicensePlate_No = "";
        Model_No = "";
        Type = "";
        Color = "";
        cout << "\nVehicle Deleted.\n";
    }

    void SearchVehicle(string plate) {
        if (LicensePlate_No == plate) {
            cout << "\nVehicle Found!\n";
            display();
        } else {
            cout << "\nVehicle Not Found.\n";
        }
    }

    void display() {
        cout << "\n--- Vehicle Details ---\n";
        cout << "License Plate No: " << LicensePlate_No << endl;
        cout << "Model No: " << Model_No << endl;
        cout << "Type: " << Type << endl;
        cout << "Color: " << Color << endl;
    }
};

// Main function
int main() {
    Vehicle v;

    string plate, model, type, color;

    cout << "Register a new vehicle:\n";
    cout << "Enter License Plate No: ";
    cin >> plate;
    v.setLicensePlate_No(plate);

    cout << "Enter Model No: ";
    cin >> model;
    v.setModel_No(model);

    cout << "Enter Type: ";
    cin >> type;
    v.setType(type);

    cout << "Enter Color: ";
    cin >> color;
    v.setColor(color);

    v.RegisterVehicle();

    cout << "\nUpdate the vehicle:\n";
    v.UpdateVehicle();

    cout << "\nSearch for a vehicle:\nEnter License Plate No: ";
    string searchPlate;
    cin >> searchPlate;
    v.SearchVehicle(searchPlate);

    cout << "\nDelete the vehicle (demonstration):";
    v.DeleteVehicle();

    return 0;
}
