#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float salary;

public:
    Employee() {
        name = "Unknown";
        id = 0;
        salary = 0.0;
    }

    void setName(string n) { name = n; }
    void setId(int i) { id = i; }
    void setSalary(float s) { salary = s; }

    string getName() { return name; }
    int getId() { return id; }
    float getSalary() { return salary; }

    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.setName("Sarah");
    emp.setId(101);
    emp.setSalary(50000);

    emp.display();

    return 0;
}
