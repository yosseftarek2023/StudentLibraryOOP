
#ifndef USERLIST_H
#define USERLIST_H
#include"user.h"
class UserList {
private:
    User* users;
    int capacity;
    int usersCount;
public:
    UserList();
    UserList(int);
    void addUser(User& user);
    User* searchUser(const std::string& name);
    User* searchUser(int id);
    void deleteUser(int id);
    int getUsersCount();
    friend std::ostream& operator<<(std::ostream& output, const UserList& userList);
    ~UserList();
};

#endif // USERLIST_H

