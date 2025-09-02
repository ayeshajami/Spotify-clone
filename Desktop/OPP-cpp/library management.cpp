#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    int id;

public:
    void input(int bookId) {
        id = bookId;
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
    }

    void display() {
        cout << "Book ID: " << id << ", Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book books[2];

    for (int i = 0; i < 2; i++) {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        books[i].input(i + 1);
    }

    cout << "\nLibrary Books:\n";
    for (int i = 0; i < 2; i++) {
        books[i].display();
    }

    return 0;
}
