// student_system.cpp
#include <iostream>
#include <vector>
using namespace std;

class Student {
    string name;
    int roll;
    float gpa;

public:
    Student(string n, int r, float g) : name(n), roll(r), gpa(g) {}

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << ", GPA: " << gpa << endl;
    }

    int getRoll() { return roll; }
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1. Add Student\n2. Show All\n3. Search by Roll\n0. Exit\nChoice:
