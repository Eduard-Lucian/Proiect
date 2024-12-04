#include "Book.h"

Book::Book(std::string title, std::string author, int pages)
    : title(title), author(author), pages(pages) {
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getPages() const {
    return pages;
}

