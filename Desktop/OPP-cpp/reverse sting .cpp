// reverse.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--)
        reversed += str[i];

    cout << "Reversed: " << reversed << endl;

    return 0;
}
