#include "user.h"
#include<iostream>
#include <iterator>
#include "userlist.h"
using namespace std;


UserList::UserList(){
        usersCount = 0;
        capacity = 0;
}
UserList::UserList(int c){
    capacity = c;
    users = new User[capacity];
    usersCount = 0;
}
int UserList::getUsersCount(){
    return  usersCount;
}
void UserList::addUser(User& user){
    if(usersCount < capacity){
        users[usersCount] = user;
        users[usersCount].setId(usersCount+1);
        usersCount++;
    }else{
        cout << " list full" << endl;
    }
    
}
User* UserList::searchUser(const std::string &name)
{
    for (int i = 0; i < usersCount; ++i) {
        if (name == users[i].getName()) {
            return &users[i];
        }
    }

    std::cout << "User with name '" << name << "' not found." << std::endl;
    return nullptr;
}
User* UserList::searchUser(int id)
{
    for (int i = 0; i < usersCount; ++i) {
        if (id == users[i].getId()) {
            return &users[i];
        }
    }

    std::cout << "User with ID " << id << " not found." << std::endl;
    return nullptr;
}


void UserList::deleteUser(int id) {
    if (usersCount > 0) {
        for (int i = 0; i < usersCount; i++) {
            if (id == users[i].getId()) {
                std::cout << "Deleting user with ID: " << id << std::endl;

                for (int j = i; j < usersCount - 1; j++) {
                    users[j] = users[j + 1];
                }

                usersCount--;
                std::cout << "Updated usersCount: " << usersCount << std::endl;
                break;
            }
        }
    }
}


ostream& operator<<(std::ostream& output, const UserList& userList) {
    for (int i = 0; i < userList.usersCount; ++i) {
        output << userList.users[i] << std::endl; // Assuming the User class has a proper operator<< overload
    }
    return output;
}


UserList::~UserList(){
    delete[] users;
};

