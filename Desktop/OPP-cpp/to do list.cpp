// todo_list.cpp
#include <iostream>
using namespace std;

int main() {
    string tasks[10];
    int count = 0, choice;

    do {
        cout << "\n1. Add Task\n2. View Tasks\n0. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1 && count < 10) {
            cout << "Enter task: ";
            cin.ignore();
            getline(cin, tasks[count++]);
        } else if (choice == 2) {
            cout << "\n--- Your Tasks ---\n";
            for (int i = 0; i < count; i++) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }
    } while (choice != 0);

    return 0;
}
