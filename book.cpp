#include "user.h"
#include "book.h"
#include<iostream>

using namespace std;
int Book::count = 0;

Book::Book() // new user created
{
    title = "";
    isbn = "";
    category = "";
    averageRating = 0.0;
    count++;
    id = count;
    numRates = 0;
    sum = 0.0;
    //hasAuthor = false;
}
Book:: Book(string t, string i  , string c ){
    title = t;
    isbn = i ;
    category = c;
    count++;
    id = count;
    averageRating = 0.0;
    //User author;
    //hasAuthor = false;
    numRates = 0;
    sum = 0.0;
};
Book:: Book(const Book& obj){
    title = obj.title;
    isbn = obj.isbn;
    category = obj.category;
    id = obj.id;
    averageRating = obj.averageRating;
    author = obj.author;
    author = obj.author; // we can make = operator
    numRates = obj.numRates;
    sum = obj.sum;
}

Book::~Book(){
    
}


void Book::setTitle(string t){
    title = t;
}

void Book::setId(int i){
        id = i;
}
string Book::getTitle() const
{
    return title;
}

int Book::getId() const
{
    return id;
}
void Book::setCategory(string c)
{
category = c;
}
string Book::getCategory() const
{
    return category;
}
void Book::setAuthor(const User &a)
{
    author = a; // call user constructor of user
}
User Book::getAuthor() const
{
    return author;
}

double Book::getAverageRating() const
{
    return averageRating;
}
void Book::rateBook(double rating)
{

    if(rating >= 1.0 && rating <= 5.0){
        numRates++;
        sum += rating;
        averageRating = sum/numRates;
    }else{
        cout << "program crash, make good rate" << endl;
    }
}
bool Book::operator==(const Book &obj)
{
    return (id== obj.id);
};

string Book::getIsbn() const
{
    return isbn;
}
void Book::setIsbn(string i){
    isbn = i;
}

    ostream &operator<<(ostream &output, const Book &Book)
    {
        output << "ID:" << Book.id << endl;
        output << "Title:" << Book.title << endl;
        output << "Isbn:" << Book.isbn << endl;
        output << "Catergory:" << Book.category << endl;
        output << "Average Raring" << Book.averageRating << endl;
        if(Book.getAuthor().getName() != ""){
            cout << Book.author << endl;
        }
        return output;

    }

    istream &operator>>(istream &input, Book &Book)
    {
        cout << "enter the details here" << endl;
        input>>Book.title>>Book.isbn>>Book.category;
        return input;
    };
