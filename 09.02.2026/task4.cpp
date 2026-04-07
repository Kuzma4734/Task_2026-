#include <iostream>
#include <cmath>

struct Time{
    int hours;
    int minutes;
    int seconds;
};
int main (){
    Time time;
    std::cout << "Enter hours:   "; 
    std::cin >> time.hours;

    std::cout << "Enter minutes:   ";
    std::cin >> time.minutes;

    std::cout << "Enter secconds:   ";
    std::cin >> time.seconds;

    int result = (time.hours * 3600) + (time.minutes * 60) + time.seconds;
    std::cout << "Total seconds: " << result << std::endl;
}
