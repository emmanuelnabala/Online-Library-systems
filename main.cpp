#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library lib;
    lib.display();

    Book book(1, "C++ Programming");
    User user(101, "Emmanuel");

    cout << "Book: " << book.getTitle() << endl;
    cout << "User: " << user.getName() << endl;

    return 0;
}
