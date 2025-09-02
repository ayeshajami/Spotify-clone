#include <iostream>
using namespace std;

class Stopwatch {
private:
    bool running;

public:
    Stopwatch() { running = false; }

    void start() {
        running = true;
        cout << "Stopwatch started.\n";
    }

    void stop() {
        if (running) {
            running = false;
            cout << "Stopwatch stopped.\n";
        } else {
            cout << "Stopwatch wasn't running.\n";
        }
    }
};

int main() {
    Stopwatch sw;
    sw.start();
    sw.stop();
    sw.stop(); // try stopping again

    return 0;
}
