#include <iostream>
#include <string>
using namespace std;

class Student {
    int age;
    int cnic;
    int semester;
    string name;

public:
    void setAll(int a, int c, int s, int sem, string n) {
        age = a;
        cnic = c;
        semester = sem;
        name = n;
    }

    void displayAll() const {
        cout << "The entered data is: " << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    Student obj;
    obj.setAll(20, 123456, 3, 4, "Aisha");
    obj.displayAll();

    Student anotherObj;
    anotherObj.setAll(22, 78910, 5, 6, "Jami");
    anotherObj.displayAll();

    return 0;
}
