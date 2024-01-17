#include "user.h"
#include<iostream>
using namespace std;
int User::count = 0;


User::User()
{
    name="";
    age = 0;
    password = "";
    email= "";
    count++;
    id = count;

}

User::User(string n, string e, string p, int a)
{
    name = n;
    email = e;
    password = p;
    age = a;
    count++;
    id = count;
}

User::User(const User &other)
{
    name = other.name;
    age = other.age;
    password = other.password;
    email = other.email;
    id = other.id;
}

bool User::operator==(const User &obj) const
{
    if(name == obj.name && age == obj.age && id == obj.id && password == obj.password){
        return true;
    }
    return false;
}

string User::getName() const {
    return name;
}

string User::getEmail() const {
    return email;
}

string User::getPassword() const {
    return password;
}

int User::getAge() const {
    return age;
}

int User::getId() const {
    return id;
}


void User::setName(const string n) {
    name = n;
}
void User::setId(int i){
    id = i;
};

void User::setEmail(const string e) {
    email = e;
}

void User::setPassword(const string p) {
    password = p;
}

void User::setAge(int a) {
    age = a;
}

void User::display() const
{
        cout << name << endl;
        cout << age << endl;
        cout << email << endl;
        cout << password << endl;
}

    ostream &operator<<(ostream &output, const User &user)
    {
        output << "ID:" << user.id << endl;
        output << "Name:" << user.name << endl;
        output << "Email:" << user.email << endl;
        output << "Password:" << user.password << endl;
        output << "Age:" << user.age << endl;
        return output;

    }

    istream &operator>>(istream &input, User &user)
    {
        cout << "enter the details here" << endl;
        input>>user.name>>user.age>>user.email>>user.password;
        return input;
    };

/*
    void User::operator =(const User&obj){
        name = obj.name;
        age = obj.age;
        email = obj.email;
        password = obj.password;
    };

*/
