// digital_clock.cpp
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    while (true) {
        auto now = chrono::system_clock::to_time_t(chrono::system_clock::now());
        system("cls");  // Use "clear" on Linux/Mac
        cout << "Current Time: " << ctime(&now);
        this_thread::sleep_for(chrono::seconds(1));
    }
    return 0;
}
