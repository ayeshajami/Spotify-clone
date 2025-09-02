#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
    char* title;
    int pages;

public:
    Book() {
        title = new char[1];
        title[0] = '\0';
        pages = 0;
    }

    Book(const char* t, int p) {
        title = new char[strlen(t) + 1];
        strcpy(title, t);
        pages = p;
    }

    Book(const Book& b) {
        title = b.title;  // shallow copy
        pages = b.pages;
    }

    Book& operator=(const Book& b) {
        if (this != &b) {
            delete[] title;
            title = new char[strlen(b.title) + 1];
            strcpy(title, b.title);
            pages = b.pages;
        }
        return *this;
    }

    void changeTitle(const char* newTitle) {
        delete[] title;
        title = new char[strlen(newTitle) + 1];
        strcpy(title, newTitle);
    }

    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }

    ~Book() {
        delete[] title;
    }
};

int main() {
    Book b1("C++ Basics", 200);
    Book b2 = b1;
    Book b3;
    b3 = b1;

    b1.changeTitle("Advanced C++");

    cout << "\nAfter changing b1's title:\n";
    b1.display();
    b2.display();
    b3.display();

    return 0;
}
