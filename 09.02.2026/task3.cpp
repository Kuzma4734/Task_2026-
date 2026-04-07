#include <iostream>
#include <cmath>

struct Point{
    int x;
    int y;
};
int main (){
    Point point;
    std::cout << "Enter x:   ";
    std::cin >> point.x;

    std::cout << "Enter y:   ";
    std::cin >> point.y;

    int result = sqrt((point.x * point.x) + (point.y * point.y));
    std::cout << "Distance from origin: " << result << std::endl;
}
