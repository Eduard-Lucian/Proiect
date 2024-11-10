#include "Administrator.h"
#include <iostream>
#include <fstream>
#include <sstream>

Administrator::Administrator() {}

Administrator::~Administrator() {
    // Eliberăm memoria alocată dinamic pentru cărți
    for (auto book : books) {
        delete book;
    }
}

void Administrator::addBook(Book* book) {
    books.push_back(book);
}

void Administrator::deleteBook(const std::string& title) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if ((*it)->getTitle() == title) {
            delete* it;  // Eliberăm memoria alocată pentru carte
            books.erase(it);
            break;
        }
    }
}

void Administrator::showLoans() const {
    for (const auto& book : books) {
        book->displayInfo();
    }
}

void Administrator::showPhysicalBooks() const {
    for (const auto& book : books) {
        if (!book->isDigital()) {
            book->displayInfo();
        }
    }
}

void Administrator::showDigitalBooks() const {
    for (const auto& book : books) {
        if (book->isDigital()) {
            book->displayInfo();
        }
    }
}

void Administrator::saveBooksToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cout << "Eroare la deschiderea fișierului pentru scriere: " << filename << "\n";
        return;
    }

    for (const auto& book : books) {
        file << book->getTitle() << ";" << book->getAuthor() << ";" << book->getPages() << "\n";
    }
}

void Administrator::loadBooksFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Eroare la deschiderea fișierului: " << filename << "\n";
        return;
    }

    std::string line;
    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string title, author;
        int pages;
        getline(ss, title, ';');
        getline(ss, author, ';');
        ss >> pages;

        // Adăugăm o carte fizică pentru simplificare
        addBook(new PhysicalBook(title, author, pages, 5));
    }
}

std::vector<Book*> Administrator::getBooks() const {
    return books;
}

