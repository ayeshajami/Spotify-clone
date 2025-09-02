#include <iostream>
using namespace std;

class Temperature {
    float value;

public:
    void input() {
        cout << "Enter temperature in Celsius: ";
        cin >> value;
    }

    float toFahrenheit() {
        return (value * 9 / 5) + 32;
    }

    float toKelvin() {
        return value + 273.15;
    }
};

int main() {
    Temperature temp;
    temp.input();

    cout << "In Fahrenheit: " << temp.toFahrenheit() << endl;
    cout << "In Kelvin: " << temp.toKelvin() << endl;

    return 0;
}
