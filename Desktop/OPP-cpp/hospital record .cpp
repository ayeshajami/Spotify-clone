// hospital.cpp
#include <iostream>
#include <fstream>
using namespace std;

class Patient {
public:
    string name;
    int age;

    void input() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void addPatient() {
    Patient p;
    p.input();
    ofstream file("patients.txt", ios::app);
    file << p.name << " " << p.age << endl;
    file.close();
    cout << "Patient added!\n";
}

void showPatients() {
    ifstream file("patients.txt");
    Patient p;
    while (file >> p.name >> p.age) {
        p.show();
    }
    file.close();
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Patient\n2. Show All\n0. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) addPatient();
        else if (choice == 2) showPatients();
    } while (choice != 0);
    return 0;
}
