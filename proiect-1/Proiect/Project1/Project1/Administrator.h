#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "Biblioteca.h"

class Administrator {
public:
    Administrator(Biblioteca& biblioteca);
    void showLoans() const;
    void saveBooksToFile(const std::string& filename) const;
    void loadBooksFromFile(const std::string& filename);

private:
    Biblioteca& biblioteca;
};

#endif
