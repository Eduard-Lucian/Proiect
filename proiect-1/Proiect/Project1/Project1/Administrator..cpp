#include "Administrator.h"
#include <iostream>

Administrator::Administrator(Biblioteca& biblioteca) : biblioteca(biblioteca) {}

void Administrator::showLoans() const {
    biblioteca.showBooks();
}

void Administrator::saveBooksToFile(const std::string& filename) const {
    // Funcționalitatea de salvare a cărților va rămâne neschimbată.
}

void Administrator::loadBooksFromFile(const std::string& filename) {
    // Funcționalitatea de încărcare a cărților va rămâne neschimbată.
}
