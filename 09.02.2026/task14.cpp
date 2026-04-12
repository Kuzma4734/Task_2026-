#include <iostream>
#include <string>

struct Product{
    std::string name;
    double price;
    int quantity;
};
int main (){
    Product product1;
    Product product2;
    Product product3;

    std::cout << "Enter product 1 name:   ";
    getline(std::cin, product1.name);

    std::cout << "Enter product 1 price:   ";
    std::cin >> product1.price;

    std::cout << "Enter product 1 quantity:    ";
    std::cin >> product1.quantity;

    std::cin.ignore();

    std::cout << "Enter product 2 name:   ";
    getline(std::cin, product2.name);

    std::cout << "Enter product 2 price:   ";
    std::cin >> product2.price;

    std::cout << "Enter product 2 quantity:    ";
    std::cin >> product2.quantity;

    std::cin.ignore();

    std::cout << "Enter product 3 name:   ";
    getline(std::cin, product3.name);

    std::cout << "Enter product 3 price:   ";
    std::cin >> product3.price;

    std::cout << "Enter product 3 quantity:    ";
    std::cin >> product3.quantity;

    double result = (product1.price * product1.quantity) + (product2.price * product2.quantity) + (product3.price * product3.quantity);

    std::cout << "Total warehouse value: " << result << " UAH" << std::endl;
}
