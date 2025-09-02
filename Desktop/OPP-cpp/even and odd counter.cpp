// even_odd_counter.cpp
#include <iostream>
using namespace std;

int main() {
    int arr[10], even = 0, odd = 0;

    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}
