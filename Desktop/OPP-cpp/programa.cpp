#include <iostream>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    bool powerStatus;

public:
    SmartDevice(string name) {
        deviceName = name;
        powerStatus = false;
    }

    void turnOn() {
        powerStatus = true;
        cout << deviceName << " is now ON.\n";
    }

    void turnOff() {
        powerStatus = false;
        cout << deviceName << " is now OFF.\n";
    }

    void getStatus() {
        cout << deviceName << " status: " << (powerStatus ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartDevice fan("Ceiling Fan");
    SmartDevice light("Living Room Light");

    fan.turnOn();
    light.turnOn();

    fan.getStatus();
    light.getStatus();

    fan.turnOff();

    return 0;
}
