#include <iostream> // Include library for input/output operations
using namespace std; // Use the standard namespace

// Define the struct Book
struct Book {
    string title;
    string author;
    int pages;
    double price;
};
int main() {
     Book my_book; // Create an instance of the struct Book
    my_book.title = "C++ Programming for Dummy";      // Assign values to the title member of the Book struct
    my_book.author = "unknown";                               // Assign values to the author member of the Book struct
    my_book.pages= 250;     // Assign values to the pages  member of the Book struct
    my_book.price = 29.99;

    // Print the values using the struct members
    cout << "Title: " << my_book.title << endl;
    cout << "Author: " << my_book.author << endl;
    cout << "Pages: " << my_book.pages << endl;
    cout << "Price: " << my_book.price << endl;
     return 0; // Return 0 to indicate successful execution
}
