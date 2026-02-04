#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
private:
    int userId;
    string name;

public:
    User(int id, string n) {
        userId = id;
        name = n;
    }

    int getUserId() {
        return userId;
    }

    string getName() {
        return name;
    }
};

#endif
