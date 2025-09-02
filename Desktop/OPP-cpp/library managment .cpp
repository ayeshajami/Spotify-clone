// library.cpp
#include <iostream>
#include <fstream>
using namespace std;

class Book {
public:
    int id;
    string title, author;

    void input() {
        cout << "Enter ID, Title, Author: ";
        cin >> id >> title >> author;
    }

    void display() {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author << endl;
    }
};

void addBook() {
    Book b;
    b.input();
    ofstream file("library.txt", ios::app);
    file << b.id << " " << b.title << " " << b.author << endl;
    file.close();
    cout << "Book added!\n";
}

void showBooks() {
    ifstream file("library.txt");
    Book b;
    while (file >> b.id >> b.title >> b.author) {
        b.display();
    }
    file.close();
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Book\n2. Show Books\n0. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) addBook();
        else if (choice == 2) showBooks();
    } while (choice != 0);
    return 0;
}
