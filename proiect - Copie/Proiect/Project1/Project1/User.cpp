#include "User.h"
#include <iostream>

User::User(std::string name) : name(name) {}

void User::borrowBook(Book* book) {
    borrowedBooks.push_back(book);
}

void User::returnBook(Book* book) {
    for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it) {
        if (*it == book) {
            borrowedBooks.erase(it);
            break;
        }
    }
}

void User::showBorrowedBooks() const {
    std::cout << "Borrowed Books by " << name << ":\n";
    for (const auto& book : borrowedBooks) {
        book->displayInfo();
    }
}

std::vector<Book*> User::getBorrowedBooks() const {
    return borrowedBooks;
}


