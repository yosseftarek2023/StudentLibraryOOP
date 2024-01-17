#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

#pragma
class User{
    private:
    string name,password,email;
    int age,id;
    public:
    static int count;
    User();
    User(string, string, string, int);
    User(const User &);
    bool operator==(const User &) const;  // Add const here
    //void operator =(const User&);
    string getName() const;               // Add const here
    string getEmail() const;              // Add const here
    string getPassword() const;           // Add const here
    int getAge() const;                   // Add const here
    int getId() const;                    // Add const here
    void setId(int);
    void setName(string);
    void setEmail(string);
    void setPassword(string);
    void setAge(int);
    void display() const;                 // Add const here
    friend ostream &operator<<(ostream &, const User &); // ostream refrence as cin
    friend istream &operator>>(istream &, User &);
};

#endif // USER_H
