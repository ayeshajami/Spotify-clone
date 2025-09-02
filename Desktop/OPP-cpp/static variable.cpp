// static_counter.cpp
#include <iostream>
using namespace std;

void counterFunction() {
    static int count = 0;
    count++;
    cout << "Function called " << count << " times.\n";
}

int main() {
    for (int i = 0; i < 5; i++) {
        counterFunction();
    }
    return 0;
}
