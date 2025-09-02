#include <iostream>
using namespace std;

class Question {
public:
    string q;
    string options[3];
    int correctIndex;

    Question(string ques, string opt1, string opt2, string opt3, int correct) {
        q = ques;
        options[0] = opt1;
        options[1] = opt2;
        options[2] = opt3;
        correctIndex = correct;
    }

    void askQuestion() {
        cout << "\n" << q << "\n";
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ". " << options[i] << endl;
        }
        int ans;
        cin >> ans;
        if (ans - 1 == correctIndex)
            cout << "Correct ✅\n";
        else
            cout << "Wrong ❌\n";
    }
};

int main() {
    Question q1("Capital of France?", "Paris", "Rome", "Berlin", 0);
    Question q2("5 + 3 = ?", "6", "8", "10", 1);

    q1.askQuestion();
    q2.askQuestion();

    return 0;
}
