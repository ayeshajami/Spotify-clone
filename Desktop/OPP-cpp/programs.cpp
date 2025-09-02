#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int studentId;

public:
    // Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        studentId = 0;
    }

    // Parameterized Constructor
    Student(string n, int a, int id) {
        name = n;
        age = a;
        studentId = id;
    }

    // Copy Constructor (Shallow Copy)
    Student(const Student& s) {
        name = s.name;
        age = s.age;
        studentId = s.studentId;
        // string does deep copy by itself
    }

    // Assignment Operator (Deep Copy)
    Student& operator=(const Student& s) {
        name = s.name;
        age = s.age;
        studentId = s.studentId;
        return *this;
    }

    // Change name
    void changeName(string newName) {
        name = newName;
    }

    // Display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", ID: " << studentId << endl;
    }
};

int main() {
    // Create first student using parameterized constructor
    Student s1("Ali", 20, 101);

    // Create second student using copy constructor (shallow)
    Student s2 = s1;

    // Create third student and use assignment (deep copy)
    Student s3;
    s3 = s1;

    // Change s1's name
    s1.changeName("Ahmed");

    // Show all student details
    cout << "\nAfter changing s1's name:\n";
    cout << "s1 -> "; s1.display();  // Ahmed
    cout << "s2 -> "; s2.display();  // Ali (in this case it still shows original because string does deep copy)
    cout << "s3 -> "; s3.display();  // Ali

    return 0;
}