#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void alarm(int seconds) {
    cout << "Alarm set for " << seconds << " seconds...\n";
    this_thread::sleep_for(chrono::seconds(seconds));
    cout << "\aTime's up!\n";  // Beep sound on some systems
}

int main() {
    int time;
    cout << "Set timer (in seconds): ";
    cin >> time;
    alarm(time);
    return 0;
}
