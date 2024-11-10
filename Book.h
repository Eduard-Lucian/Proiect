#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(std::string title, std::string author, int pages);
    virtual ~Book() = default;
    std::string getTitle() const;
    std::string getAuthor() const;
    int getPages() const;
    virtual bool isDigital() const = 0;  // Pure virtual function
    virtual void displayInfo() const = 0;

protected:
    std::string title;
    std::string author;
    int pages;
};

#endif



