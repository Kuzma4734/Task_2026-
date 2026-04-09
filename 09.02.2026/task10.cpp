#include <iostream>

struct Rectangle{
    int width;
    int height;
};
int main (){
    Rectangle rectangle1;
    Rectangle rectangle2;
    std::cout << "Enter rectangle 1 width:   "; 
    std::cin >> rectangle1.width;

    std::cout << "Enter rectangle 1 height:   ";
    std::cin >> rectangle1.height;

    std::cout << "Enter rectangle 2 width:   "; 
    std::cin >> rectangle2.width;

    std::cout << "Enter rectangle 2 height:   ";
    std::cin >> rectangle2.height;

    int area1 = rectangle1.height * rectangle1.width;
    int area2 = rectangle2.height * rectangle2.width;

    if (area1 > area2)
    {
        std::cout << "Rectangle 1 is larger (area: " << area1 << ")" << std::endl;
    } else if (area2 > area1)
    {
        std::cout << "Rectangle 2 is larger (area: " << area2 << ")" << std::endl;
    }else{
        std::cout << "Area rectangle 1 = area rectangle 2" << std::endl;
    }

}
