#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    int id;
    int maxSpeed;

public:
    Vehicle(int vid = 0, int speed = 0) {
        id = vid;
        maxSpeed = speed;
    }

    virtual void displayVehicleDetails() {
        cout << "\nVehicle ID: " << id;
        cout << "\nMaximum Speed: " << maxSpeed << " km/h";
    }
};

// Inherited class for transporting passengers
class PassengerTransport : virtual public Vehicle {
public:
    void transportPassengers() {
        cout << "\nThis vehicle can transport passengers.";
    }
};

// Inherited class for transporting goods
class GoodsTransport : virtual public Vehicle {
public:
    void transportGoods() {
        cout << "\nThis vehicle can transport goods.";
    }
};

// Truck inherits from both passenger and goods transport
class Truck : public PassengerTransport, public GoodsTransport {
private:
    int towingCapacity;

public:
    Truck(int id, int speed, int towCap) : Vehicle(id, speed) {
        towingCapacity = towCap;
    }

    void tow() {
        cout << "\nThis truck can tow up to " << towingCapacity << " kg.";
    }

    void displayVehicleDetails() override {
        cout << "\n--- Truck Details ---";
        Vehicle::displayVehicleDetails();  // calling base class function
    }
};

// Main function
int main() {
    // Create a pointer to a Truck object
    Truck* truckPtr = new Truck(101, 120, 5000);

    // Call functions using the pointer
    truckPtr->displayVehicleDetails();
    truckPtr->transportPassengers();
    truckPtr->transportGoods();
    truckPtr->tow();

    // Clean up memory
    delete truckPtr;

    return 0;
}
