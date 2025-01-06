#ifndef DIGITALBOOK_H
#define DIGITALBOOK_H

#include "Book.h"

class DigitalBook : public Book {
public:
    DigitalBook(std::string title, std::string author, int pages, int borrowLimit);
    void displayInfo() const override;
    int getBorrowLimit() const;
    bool isDigital() const override;

private:
    int borrowLimit;
};

#endif

