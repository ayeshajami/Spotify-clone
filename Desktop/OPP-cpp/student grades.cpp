// grades.cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks[3];

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) cin >> marks[i];
    }

    void displayResult() {
        int total = marks[0] + marks[1] + marks[2];
        float average = total / 3.0;
        char grade = (average >= 90) ? 'A' :
                     (average >= 75) ? 'B' :
                     (average >= 60) ? 'C' : 'F';

        cout << "Name: " << name << ", Total: " << total << ", Grade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.displayResult();

    return 0;
}
