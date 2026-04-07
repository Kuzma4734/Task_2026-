#include <iostream>
#include <string>

struct Book{
    std::string title;
    std::string author;
    int year;
};
int main (){
    Book book;
    std::cout << "Enter title of book:   ";
    getline(std::cin, book.title);

    std::cout << "Enter author of book:   ";
    getline(std::cin, book.author);

    std::cout << "Enter tear of book:    ";
    std::cin >> book.year;

    std::cout << "\"" << book.title << "\"" << " by " << book.author << " (" << book.year << ")" << std::endl;
}
