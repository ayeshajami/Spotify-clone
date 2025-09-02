#include <iostream>
#include <vector>
using namespace std;

class Room {
private:
    int roomNumber;
    bool isBooked;
public:
    Room(int num) : roomNumber(num), isBooked(false) {}
    void book() { isBooked = true; }
    void cancel() { isBooked = false; }
    bool status() { return isBooked; }
    int getRoomNumber() { return roomNumber; }
};

int main() {
    vector<Room> rooms;
    for (int i = 1; i <= 5; i++) rooms.push_back(Room(i));

    int choice;
    do {
        cout << "\n1. Book Room\n2. Cancel Room\n3. View Rooms\n0. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            int rn;
            cout << "Enter room number (1-5): ";
            cin >> rn;
            if (rn >= 1 && rn <= 5) {
                if (choice == 1 && !rooms[rn - 1].status()) {
                    rooms[rn - 1].book();
                    cout << "Room booked!\n";
                } else if (choice == 2 && rooms[rn - 1].status()) {
                    rooms[rn - 1].cancel();
                    cout << "Booking cancelled.\n";
                } else {
                    cout << "Invalid action!\n";
                }
            }
        } else if (choice == 3) {
            for (auto& r : rooms)
                cout << "Room " << r.getRoomNumber() << ": "
                     << (r.status() ? "Booked" : "Available") << endl;
        }
    } while (choice != 0);

    return 0;
}
