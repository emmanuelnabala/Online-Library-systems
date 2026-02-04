#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author;
    bool isBorrowed;

public:
    Book(int i, string t, string a) {
        id = i;
        title = t;
        author = a;
        isBorrowed = false;
    }

    int getId() { return id; }
    string getTitle() { return title; }
    bool borrowed() { return isBorrowed; }

    void borrowBook() { isBorrowed = true; }
    void returnBook() { isBorrowed = false; }
};

#endif
