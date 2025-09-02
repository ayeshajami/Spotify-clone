#include <iostream>
#include <vector>
using namespace std;

class Railway {
    vector<string> bookings;

public:
    void bookTicket(string name) {
        bookings.push_back(name);
        cout << "Ticket booked for " << name << endl;
    }

    void cancelTicket(string name) {
        for (int i = 0; i < bookings.size(); i++) {
            if (bookings[i] == name) {
                bookings.erase(bookings.begin() + i);
                cout << "Ticket canceled for " << name << endl;
                return;
            }
        }
        cout << "No booking found for " << name << endl;
    }

    void showBookings() {
        cout << "\nCurrent Bookings:\n";
        for (string name : bookings) {
            cout << "- " << name << endl;
        }
    }
};

int main() {
    Railway r;
    r.bookTicket("Ali");
    r.bookTicket("Sara");
    r.cancelTicket("Ali");
    r.showBookings();
    return 0;
}
