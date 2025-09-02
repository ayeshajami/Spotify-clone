// palindrome_checker.cpp
#include <iostream>
#include <algorithm>
using namespace std;

class Palindrome {
    string text;

public:
    void input() {
        cout << "Enter a word: ";
        cin >> text;
    }

    bool isPalindrome() {
        string rev = text;
        reverse(rev.begin(), rev.end());
        return text == rev;
    }

    void display() {
        if (isPalindrome())
            cout << text << " is a palindrome.\n";
        else
            cout << text << " is not a palindrome.\n";
    }
};

int main() {
    Palindrome p;
    p.input();
    p.display();
    return 0;
}
