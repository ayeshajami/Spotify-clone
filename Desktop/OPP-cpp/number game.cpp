// guess.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (1 to 100): ";
    while (true) {
        cin >> guess;
        if (guess == secret) {
            cout << "You got it!\n";
            break;
        } else if (guess < secret) {
            cout << "Too low. Try again: ";
        } else {
            cout << "Too high. Try again: ";
        }
    }

    return 0;
}
