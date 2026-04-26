#include <iostream>
#include <cmath>

struct Point{
    int x;
    int y;
};
struct Segment{
    Point start;
    Point end;
};


int main (){
    Segment segment;

    std::cout << "Enter x start:   ";
    std::cin >> segment.start.x;

    std::cout << "Enter y start:   ";
    std::cin >> segment.start.y;

    std::cout << "Enter x end:   ";
    std::cin >> segment.end.x;

    std::cout << "Enter y end:   ";
    std::cin >> segment.end.y;

    double result = sqrt((segment.end.x - segment.start.x) * (segment.end.x - segment.start.x) + (segment.end.y - segment.start.y) * (segment.end.y - segment.start.y));
    std::cout << "Segment length: " << result << std::endl;
}
