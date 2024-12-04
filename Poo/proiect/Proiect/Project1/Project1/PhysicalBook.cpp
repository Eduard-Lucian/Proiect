#include "PhysicalBook.h"
#include <iostream>

PhysicalBook::PhysicalBook(std::string title, std::string author, int pages, int stock)
    : Book(title, author, pages), stock(stock) {
}

void PhysicalBook::displayInfo() const {
    std::cout << "Physical Book: " << title << " by " << author << ", Pages: " << pages
        << ", Stock: " << stock << "\n";
}

int PhysicalBook::getStock() const {
    return stock;
}

void PhysicalBook::decreaseStock() {
    if (stock > 0) {
        --stock;
    }
}

void PhysicalBook::increaseStock() {
    ++stock;
}

bool PhysicalBook::isDigital() const {
    return false;
}


