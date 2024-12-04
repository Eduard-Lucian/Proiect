#ifndef PHYSICALBOOK_H
#define PHYSICALBOOK_H

#include "Book.h"

class PhysicalBook : public Book {
public:
    PhysicalBook(std::string title, std::string author, int pages, int stock);
    void displayInfo() const override;
    int getStock() const;
    void decreaseStock();
    void increaseStock();
    bool isDigital() const override;

private:
    int stock;
};

#endif


