#include <iostream>

struct Rectangle{
    int width;
    int height;
};
int main (){
    Rectangle rectangle;
    std::cout << "Enter width:   "; 
    std::cin >> rectangle.width;

    std::cout << "Enter height:   ";
    std::cin >> rectangle.height;

    int area = rectangle.height * rectangle.width;
    int perimeter = (rectangle.height * 2) + (rectangle.width * 2);

    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;

}
