#include <iostream>
#include <string>

struct Product{
    std::string name;
    double price;
};
struct Order{
    Product product;
    int quantity;
};

int main (){
    Order order;

    std::cout << "Enter product name:   ";
    getline(std::cin, order.product.name);

    std::cout << "Enter product price:   ";
    std::cin >> order.product.price;

    std::cout << "Enter product quantity:   ";
    std::cin >> order.quantity;


    double result = order.quantity * order.product.price;
    std::cout << "Order total: " << result << " UAH" << std::endl;
     
}
