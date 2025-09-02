// quiz.cpp
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string questions[] = {
        "What is the capital of France?\n1. London 2. Berlin 3. Paris 4. Rome",
        "Which language is used in C++?\n1. Python 2. Java 3. C++ 4. Ruby"
    };
    int answers[] = {3, 3};
    int score = 0;

    time_t start = time(0);

    for (int i = 0; i < 2; i++) {
        cout << questions[i] << "\nAnswer: ";
        int ans; cin >> ans;
        if (ans == answers[i]) score++;
    }

    time_t end = time(0);
    cout << "Score: " << score << "/2\n";
    cout << "Time taken: " << end - start << " seconds\n";

    return 0;
}
