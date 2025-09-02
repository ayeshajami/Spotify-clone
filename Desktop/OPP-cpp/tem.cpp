// temperature_converter.cpp
#include <iostream>
using namespace std;

float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
    int choice;
    float temp;

    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "In Fahrenheit: " << celsiusToFahrenheit(temp) << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "In Celsius: " << fahrenheitToCelsius(temp) << endl;
    } else {
        cout << "Invalid choice.";
    }

    return 0;
}
