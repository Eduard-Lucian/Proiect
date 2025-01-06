#include "Biblioteca.h"
#include "Administrator.h"
#include "PhysicalBook.h"
#include "DigitalBook.h"
#include "User.h"
#include <iostream>
#include <string>

using namespace std;

void displayAdminMenu() {
    cout << "\nAdmin Menu:\n";
    cout << "1. Add Book\n";
    cout << "2. Delete Book\n";
    cout << "3. View Loans\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

void displayUserMenu() {
    cout << "\nUser Menu:\n";
    cout << "1. Borrow Book\n";
    cout << "2. Return Book\n";
    cout << "3. Show Borrowed Books\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    Biblioteca biblioteca;
    Administrator admin(biblioteca);
    admin.loadBooksFromFile("books.txt");

    int choice;
    cout << "Welcome to the Library System!\n";
    cout << "Are you an admin or a user? (1 for Admin, 2 for User): ";
    cin >> choice;

    if (choice == 1) {
        // Admin actions
        string adminName;
        cout << "Enter Admin Name: ";
        cin >> adminName;

        while (true) {
            displayAdminMenu();
            cin >> choice;

            if (choice == 1) {
                // Add a book
                string title, author;
                int pages, stock;
                cout << "Enter title: ";
                cin >> title;
                cout << "Enter author: ";
                cin >> author;
                cout << "Enter pages: ";
                cin >> pages;
                cout << "Enter stock: ";
                cin >> stock;
                biblioteca.addBook(new PhysicalBook(title, author, pages, stock));
            }
            else if (choice == 2) {
                // Delete a book
                string title;
                cout << "Enter title to delete: ";
                cin >> title;
                biblioteca.deleteBook(title);
            }
            else if (choice == 3) {
                admin.showLoans();
            }
            else if (choice == 4) {
                break;
            }
        }
    }
    else if (choice == 2) {
        // User actions
        string userName;
        cout << "Enter User Name: ";
        cin >> userName;

        User user(userName);

        while (true) {
            displayUserMenu();
            cin >> choice;

            if (choice == 1) {
                // Borrow a book
                string title;
                cout << "Enter title to borrow: ";
                cin >> title;
                for (auto book : biblioteca.getBooks()) {
                    if (book->getTitle() == title) {
                        user.borrowBook(book);
                        if (!book->isDigital()) {
                            PhysicalBook* physicalBook = dynamic_cast<PhysicalBook*>(book);
                            physicalBook->decreaseStock();
                        }
                        break;
                    }
                }
            }
            else if (choice == 2) {
                // Return a book
                string title;
                cout << "Enter title to return: ";
                cin >> title;
                for (auto book : user.getBorrowedBooks()) {
                    if (book->getTitle() == title) {
                        user.returnBook(book);
                        if (!book->isDigital()) {
                            PhysicalBook* physicalBook = dynamic_cast<PhysicalBook*>(book);
                            physicalBook->increaseStock();
                        }
                        break;
                    }
                }
            }
            else if (choice == 3) {
                user.showBorrowedBooks();
            }
            else if (choice == 4) {
                break;
            }
        }
    }

    return 0;
}
