#include <iostream>
#include <cmath>

struct Point{
    int x;
    int y;
};
struct Rectangle{
    Point leftbottom;
    Point righttop;
};


int main (){
    Rectangle rectangle;

    std::cout << "Enter Bottom left x:   ";
    std::cin >> rectangle.leftbottom.x;

    std::cout << "Enter Bottom left y:   ";
    std::cin >> rectangle.leftbottom.y;

    std::cout << "Enter Top right x:   ";
    std::cin >> rectangle.righttop.x;

    std::cout << "Enter Top right y:   ";
    std::cin >> rectangle.righttop.y;

    double width = std::abs(rectangle.righttop.x - rectangle.leftbottom.x);
    double height = std::abs(rectangle.righttop.y - rectangle.leftbottom.y);
    double result = width * height;
    std::cout << "Area: " << result << std::endl;
}
