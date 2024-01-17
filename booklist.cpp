#include <iostream>
#include "booklist.h"
#include "book.h"
using namespace std;


    BookList::BookList(){
        capacity = 0;
        booksCount = 0;
    };
    BookList::BookList(int c ){
        booksCount = 0;
        capacity = c;
        books = new Book[capacity];
    };

    void BookList::addBook(const Book& obj ){
        if(booksCount < capacity){
            books[booksCount] = obj; // book have pointer member so we can't make pointer equalize
            books[booksCount].setId(booksCount+1);
            booksCount++;
        }else{
        cout << " list full" << endl;
        }
    }; // at the end of the array.

    Book* BookList::searchBook(string title){
        for(int i = 0 ; i < booksCount; i++){
            if(books[i].getTitle() == title){
                return &books[i];
            }
        }
        return nullptr;
    };
    Book* BookList::searchBook(int id ){
        for(int i = 0 ; i < booksCount; i++){
            if(books[i].getId() == id){
                return &books[i];
            }
        }
        return nullptr;
    };

    void BookList::deleteBook(int id){
        if (booksCount > 0) {
        for (int i = 0; i < booksCount; i++) {
            if (id == books[i].getId()) {
                std::cout << "Deleting user with ID: " << id << std::endl;

                for (int j = i; j < booksCount - 1; j++) {
                    books[j] = books[j + 1];
                }

                booksCount--;
                std::cout << "Updated booksCount: " << booksCount << std::endl;
                break;
            }
        }
    }
    }; //delete a book

    Book BookList::getTheHighestRatedBook(){
        int maxindex = 0;
        double max = books[0].getAverageRating();
        for(int i = 1 ; i < booksCount; i++){
            if(max < books[i].getAverageRating()){
                maxindex = i;
            }
        }
        return books[maxindex];
    };

     void BookList::getBooksForUser(const User &author){
        bool found = false;
        for(int i = 0 ; i < booksCount; i++){
            if(books[i].getAuthor() == author){
                cout << books[i] << endl;
                found = true;
            }
        }

        if(!found){
            cout << "no books here"<< endl;
        }
    }; 
      Book& BookList::operator[](int index) {
    if (index < 0 || index >= booksCount) {
        cout << "Index not found" << endl;
        // Here, I'm returning a default-constructed Book
        static Book defaultBook; // Assuming Book has a default constructor
        return defaultBook;
    }
    return books[index];
}
    ostream&operator<<(ostream & output ,const BookList & booklist){
        for (int i = 0; i < booklist.booksCount; ++i) {
        output << booklist.books[i] << endl; // Assuming the User class has a proper operator<< overload
    }
    return output;
    }; 
     BookList::~BookList(){
        delete[] books;
    };