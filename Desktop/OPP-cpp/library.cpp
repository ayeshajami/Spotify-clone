// library_system.cpp
#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    int id;
    bool isAvailable;

public:
    void addBook(int bId, string bTitle, string bAuthor) {
        id = bId;
        title = bTitle;
        author = bAuthor;
        isAvailable = true;
    }

    void displayBook() {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author
             << ", Available: " << (isAvailable ? "Yes" : "No") << endl;
    }

    int getId() { return id; }

    void borrowBook() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "Sorry, book
