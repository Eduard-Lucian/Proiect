#include "DigitalBook.h"
#include <iostream>

DigitalBook::DigitalBook(std::string title, std::string author, int pages, int borrowLimit)
    : Book(title, author, pages), borrowLimit(borrowLimit) {
}

void DigitalBook::displayInfo() const {
    std::cout << "Digital Book: " << title << " by " << author << ", Pages: " << pages
        << ", Borrow Limit: " << borrowLimit << " days.\n";
}

int DigitalBook::getBorrowLimit() const {
    return borrowLimit;
}

bool DigitalBook::isDigital() const {
    return true;
}

