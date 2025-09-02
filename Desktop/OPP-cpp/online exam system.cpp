#include <iostream>
using namespace std;

class Exam {
    int score = 0;

public:
    void start() {
        char ans;

        cout << "\n1. What is the capital of France?\nA. Paris\nB. Rome\nC. Berlin\nYour Answer: ";
        cin >> ans;
        if (toupper(ans) == 'A') score++;

        cout << "\n2. 5 * 6 = ?\nA. 25\nB. 30\nC. 20\nYour Answer: ";
        cin >> ans;
        if (toupper(ans) == 'B') score++;

        cout << "\nExam Finished. Your Score: " << score << "/2\n";
    }
};

int main() {
    Exam userExam;
    userExam.start();
    return 0;
}
