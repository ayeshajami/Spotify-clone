#include <iostream>
using namespace std;

class Weather {
    float temps[7];

public:
    void inputTemps() {
        cout << "Enter temperatures for 7 days:\n";
        for (int i = 0; i < 7; i++) {
            cout << "Day " << i + 1 << ": ";
            cin >> temps[i];
        }
    }

    void analyze() {
        float sum = 0, minT = temps[0], maxT = temps[0];
        for (int i = 0; i < 7; i++) {
            sum += temps[i];
            if (temps[i] < minT) minT = temps[i];
            if (temps[i] > maxT) maxT = temps[i];
        }
        cout << "Average: " << sum / 7 << ", Min: " << minT << ", Max: " << maxT << endl;
    }
};

int main() {
    Weather w;
    w.inputTemps();
    w.analyze();
    return 0;
}
