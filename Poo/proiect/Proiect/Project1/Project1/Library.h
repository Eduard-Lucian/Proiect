#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <vector>
#include <string>
#include "Book.h"
#include "PhysicalBook.h"
#include "DigitalBook.h"

class Library {
public:
    Library();
    ~Library();  // Destructor pentru a elibera memoria alocatã dinamic
    void addBook(Book* book);
    void deleteBook(const std::string& title);
    void showLoans() const;
    void showPhysicalBooks() const;
    void showDigitalBooks() const;
    void saveBooksToFile(const std::string& filename) const;
    void loadBooksFromFile(const std::string& filename);
    std::vector<Book*> getBooks() const;
    void borrowBook(string isbn, User* user);

private:
    std::vector<Book*> books;
};

#endif

