#include <iostream>
using namespace std;

class Task {
public:
    string description;
    bool completed;

    Task(string desc) {
        description = desc;
        completed = false;
    }

    void markDone() {
        completed = true;
    }

    void show() {
        cout << "[ " << (completed ? "✔" : " ") << " ] " << description << endl;
    }
};

int main() {
    Task tasks[3] = {
        Task("Finish assignment"),
        Task("Attend class"),
        Task("Go for a walk")
    };

    tasks[0].markDone();

    for (int i = 0; i < 3; i++) {
        tasks[i].show();
    }

    return 0;
}
