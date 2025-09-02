// employee_salary.cpp
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    float basicSalary, allowance, tax;

public:
    void setDetails(string n, float basic) {
        name = n;
        basicSalary = basic;
        allowance = basic * 0.2;
        tax = basic * 0.1;
    }

    void calculateSalary() {
        float netSalary = basicSalary + allowance - tax;
        cout << "\nEmployee: " << name;
        cout << "\nNet Salary: " << netSalary << endl;
    }
};

int main() {
    Employee e1;
    e1.setDetails("Ali", 50000);
    e1.calculateSalary();

    return 0;
}
