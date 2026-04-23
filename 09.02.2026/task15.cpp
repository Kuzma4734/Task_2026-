#include <iostream>
#include <string>

struct Product{
    std::string name;
    double price;
};
int main (){
    Product product1;
    Product product2;
    Product product3;

    std::cout << "Enter product 1 name:   ";
    getline(std::cin, product1.name);

    std::cout << "Enter product 1 price:   ";
    std::cin >> product1.price;

    std::cin.ignore();

    std::cout << "Enter product 2 name:   ";
    getline(std::cin, product2.name);

    std::cout << "Enter product 2 price:   ";
    std::cin >> product2.price;

    std::cin.ignore();

    std::cout << "Enter product 3 name:   ";
    getline(std::cin, product3.name);

    std::cout << "Enter product 3 price:   ";
    std::cin >> product3.price;

    if (product1.price < product2.price && product1.price < product3.price)
    {
        std::cout << "Cheapest: " << product1.name << " (" << product1.price << ")" << std::endl;
        
    } else if (product2.price < product1.price && product2.price < product3.price)
    {
        std::cout << "Cheapest: " << product2.name << " (" << product2.price << ")" << std::endl;

    } else if (product3.price < product1.price && product3.price < product2.price)
    {
        std::cout << "Cheapest: " << product3.name << " (" << product3.price << ")" << std::endl;
    } 
}
