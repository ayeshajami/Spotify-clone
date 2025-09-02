#include <iostream>
#include <vector>
using namespace std;

class Contact {
private:
    string name, phone, email;
public:
    Contact(string n, string p, string e) : name(n), phone(p), email(e) {}
    string getName() { return name; }
    void display() {
        cout << "Name: " << name << ", Phone: " << phone << ", Email: " << email << endl;
    }
};

int main() {
    vector<Contact> contacts;
    int choice;
    do {
        cout << "\n1. Add Contact\n2. View Contacts\n3. Search by Name\n0. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            string name, phone, email;
            cout << "Enter name: "; cin >> name;
            cout << "Enter phone: "; cin >> phone;
            cout << "Enter email: "; cin >> email;
            contacts.push_back(Contact(name, phone, email));
        } else if (choice == 2) {
            for (auto& c : contacts) c.display();
        } else if (choice == 3) {
            string searchName;
            cout << "Enter name to search: ";
            cin >> searchName;
            bool found = false;
            for (auto& c : contacts) {
                if (c.getName() == searchName) {
                    c.display(); found = true;
                }
            }
            if (!found) cout << "Contact not found.\n";
        }
    } while (choice != 0);
    return 0;
}
