// calculator.cpp
#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (b != 0) ? (float)a / b : 0; }

int main() {
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Add  2.Subtract  3.Multiply  4.Divide\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Result: " << add(a, b); break;
        case 2: cout << "Result: " << subtract(a, b); break;
        case 3: cout << "Result: " << multiply(a, b); break;
        case 4: cout << "Result: " << divide(a, b); break;
        default: cout << "Invalid choice";
    }

    return 0;
}
