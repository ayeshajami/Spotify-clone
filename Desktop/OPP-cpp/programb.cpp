#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    bool isAvailable;

public:
    Book(string t = "Unknown", string a = "Unknown", bool avail = true) {
        title = t;
        author = a;
        isAvailable = avail;
    }

    void borrowBook() {
        if (isAvailable) {
            isAvailable = false;
            cout << title << " borrowed successfully.\n";
        } else {
            cout << title << " is currently unavailable.\n";
        }
    }

    void returnBook() {
        isAvailable = true;
        cout << title << " returned.\n";
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author
             << ", Status: " << (isAvailable ? "Available" : "Borrowed") << endl;
    }
};

int main() {
    Book library[2] = {
        Book("C++ Guide", "Bjarne Stroustrup"),
        Book("Intro to AI", "Andrew Ng")
    };

    library[0].borrowBook();
    library[1].display();

    library[0].returnBook();
    library[0].display();

    return 0;
}
