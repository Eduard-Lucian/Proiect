#ifndef USER_H
#define USER_H

#include <vector>
#include <string>
#include "Book.h"

class User {
public:
    User(std::string name);
    void borrowBook(Book* book);
    void returnBook(Book* book);
    void showBorrowedBooks() const;
    std::vector<Book*> getBorrowedBooks() const;

private:
    std::string name;
    std::vector<Book*> borrowedBooks;
};

#endif


