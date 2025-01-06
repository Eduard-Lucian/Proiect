#include "Biblioteca.h"
#include <iostream>
#include <algorithm>

Biblioteca::Biblioteca() {}

Biblioteca::~Biblioteca() {
    for (auto book : books) {
        delete book;
    }
}

void Biblioteca::addBook(Book* book) {
    books.push_back(book);
}

void Biblioteca::deleteBook(const std::string& title) {
    auto it = std::find_if(books.begin(), books.end(), [&title](Book* book) {
        return book->getTitle() == title;
        });

    if (it != books.end()) {
        delete* it;
        books.erase(it);
    }
    else {
        std::cout << "Cartea cu titlul '" << title << "' nu a fost gasita.\n";
    }
}

void Biblioteca::showBooks() const {
    for (const auto& book : books) {
        book->displayInfo();
    }
}

std::vector<Book*> Biblioteca::getBooks() const {
    return books;
}
