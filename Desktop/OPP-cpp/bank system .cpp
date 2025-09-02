// bank_login.cpp
#include <iostream>
#include <map>
using namespace std;

map<string, string> users = {
    {"admin", "1234"},
    {"user", "pass"}
};

void login() {
    string u, p;
    cout << "Username: "; cin >> u;
    cout << "Password: "; cin >> p;

    if (users[u] == p)
        cout << "Login successful!\n";
    else
        cout << "Invalid credentials.\n";
}

int main() {
    login();
    // Add more banking operations after login if needed
    return 0;
}
