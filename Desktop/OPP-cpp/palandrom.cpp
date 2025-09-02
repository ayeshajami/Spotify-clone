// palindrome_string.cpp
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    if (isPalindrome(word))
        cout << word << " is a palindrome." << endl;
    else
        cout << word << " is not a palindrome." << endl;

    return 0;
}
