#include <iostream>
using namespace std;

class Password {
private:
    string password;

public:
    Password(string p) { password = p; }

    bool isStrong() {
        return password.length() >= 8 &&
               password.find_first_of("0123456789") != string::npos &&
               password.find_first_of("!@#$%^&*") != string::npos &&
               password.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos;
    }

    void checkStrength() {
        if (isStrong())
            cout << "Password is Strong ✅" << endl;
        else
            cout << "Password is Weak ❌ (Use upper, number & symbol)" << endl;
    }
};

int main() {
    Password myPass("Hello@123");
    myPass.checkStrength();
    return 0;
}
