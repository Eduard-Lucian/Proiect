#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Book.h"

class Biblioteca {
public:
    Biblioteca();
    ~Biblioteca();
    void addBook(Book* book);
    void deleteBook(const std::string& title);
    void showBooks() const;
    std::vector<Book*> getBooks() const;

private:
    std::vector<Book*> books;
};

#endif
