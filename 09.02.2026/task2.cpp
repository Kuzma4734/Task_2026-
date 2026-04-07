#include <iostream>
#include <string>

struct Product{
    std::string name;
    double price;
    int quantity;
};
int main (){
    Product product;
    std::cout << "Enter name:   ";
    getline(std::cin, product.name);

    std::cout << "Enter price:   ";
    std::cin >> product.price;

    std::cout << "Enter quantity:    ";
    std::cin >> product.quantity;

    std::cout << "total: " << product.price * product.quantity << "UAH" << std::endl;
}
