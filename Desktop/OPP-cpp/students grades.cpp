#include <iostream>
#include <vector>
using namespace std;

class Student {
    string name;
    vector<int> marks;

public:
    Student(string n, vector<int> m) : name(n), marks(m) {}

    void displayAverage() {
        int total = 0;
        for (int mark : marks) total += mark;
        float avg = (float)total / marks.size();
        cout << "Student: " << name << ", Average: " << avg << endl;
    }
};

int main() {
    Student s1("Sara", {85, 90, 78, 88});
    s1.displayAverage();
    return 0;
}
