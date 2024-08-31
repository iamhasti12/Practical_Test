#include <iostream>
#include <string>

// Define the Book class
class Book {
public:
    // Constructor to initialize the attributes
    Book(std::string t, std::string a, int y) : title(t), author(a), publishedYear(y) {}

    // Member function to display book details
    void display() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Published Year: " << publishedYear << std::endl;
    }

private:
    std::string title;
    std::string author;
    int publishedYear;
};

// Main function to demonstrate the usage of the Book class
int main() {
    // Create an array of Book objects
    Book books[] = {
        Book("1984", "George Orwell", 1949),
        Book("To Kill a Mockingbird", "Harper Lee", 1960),
        Book("The Great Gatsby", "F. Scott Fitzgerald", 1925)
    };

    // Number of books in the array
    int numberOfBooks = sizeof(books) / sizeof(books[0]);

    // Access and display the attributes of each book
    for (int i = 0; i < numberOfBooks; ++i) {
        std::cout << "Book " << (i + 1) << ":" << std::endl;
        books[i].display();
        std::cout << std::endl;
    }

    return 0;
}
