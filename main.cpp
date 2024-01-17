#include<iostream>
#include "user.cpp"
#include "book.cpp"
#include "userlist.cpp"
#include "booklist.cpp"

void displayMainMenu() {
    std::cout << "Select one of the following choices:\n";
    std::cout << "1- Books Menu\n";
    std::cout << "2- Users Menu\n";
    std::cout << "3- Exit\n";
}

void displayUserMenu() {
    std::cout << "USERS MENU\n";
    std::cout << "1- Create a USER and add it to the list\n";
    std::cout << "2- Search for a user\n";
    std::cout << "3- Display all users\n";
    std::cout << "4- Back to the main\n";
}

void displaySearchUserMenu() {
    std::cout << "SEARCH FOR A USER\n";
    std::cout << "1- Search by name\n";
    std::cout << "2- Search by id\n";
    std::cout << "3- Return to users Menu\n";
}

void displayDeleteUserMenu() {
    std::cout << "1- Delete user\n";
    std::cout << "2- Return to users Menu\n";
}

void displayBookMenu() {
    std::cout << "BOOKS MENU\n";
    std::cout << "1- Create a book and add it to the list\n";
    std::cout << "2- Search for a book\n";
    std::cout << "3- Display all books (with book rating)\n";
    std::cout << "4- Get the highest rating\n";
    std::cout << "5- Get all books of a user\n";
    std::cout << "6- Back to the main menu\n";
}

void displaySearchBookMenu() {
    std::cout << "SEARCH FOR A BOOK\n";
    std::cout << "1- Search by name\n";
    std::cout << "2- Search by id\n";
    std::cout << "3- Return to Books Menu\n";
}

void displayUpdateBookMenu() {
    std::cout << "1- Update author\n";
    std::cout << "2- Update name\n";
    std::cout << "3- Update Category\n";
    std::cout << "4- Delete Book\n";
    std::cout << "5- Rate book\n";
    std::cout << "6- Get back to books menu\n";
}


int main(){
BookList b1(10);
Book ba,b2,b3;
b2.rateBook(4);
ba.rateBook(2);
b3.rateBook(1);
b1.addBook(ba);
b1.addBook(b2);
b1.addBook(b3);
Book bs = b1.getTheHighestRatedBook();
cout << bs;
return 0;
}