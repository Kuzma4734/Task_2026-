#include <iostream>
#include <string>

struct Product{
    std::string name;
    double price;
};

int main (){
    Product product1;
    Product product2;
    
    std::cout << "Enter product 1 name:   ";
    getline(std::cin, product1.name);

    std::cout << "Enter product 1 price:   ";
    std::cin >> product1.price;

    std::cin.ignore();

    std::cout << "Enter product 2 name:   ";
    getline(std::cin, product2.name);

    std::cout << "Enter product 2 price:   ";
    std::cin >> product2.price;

    if (product1.price > product2.price)
    {
        std::cout << product1.name << " is more expensive" << std::endl;
    }else if (product1.price < product2.price)
    {
        std::cout << product2.name << " is more expensive" << std::endl;
    }else{
        std::cout << "the prices are the same" << std::endl;
    }

    
}
