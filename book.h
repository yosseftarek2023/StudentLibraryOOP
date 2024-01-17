#ifndef book_H
#define book_H
#include <string>
#include "user.h"
using namespace std;
#pragma

class Book
{
private:
 string title;
 string isbn;
string category;
 int id;
 double averageRating;
 User author; // every book has a author (Aggregation) new user created, but we here create pointer to stop this
 //bool hasAuthor;
 int numRates;
 double sum;
public:
static int count;
 Book();
 Book(string , string , string );
 Book(const Book& );
 void setTitle(string );
 string getTitle() const ;
 void setIsbn(string );
 string getIsbn() const;
 void setId(int);
 int getId() const;
 void setCategory(string );
 string getCategory()const;
 void setAuthor(const User & );
 User getAuthor() const;
 void rateBook(double );
 double getAverageRating () const;
 bool operator==(const Book&);
 friend ostream &operator<<(ostream &, const Book &);
 friend istream &operator>>( istream &, Book &);
 ~Book();
};

#endif 