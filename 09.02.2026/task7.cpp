#include <iostream>

struct Time{
    int hours;
    int minutes;
    int seconds;
};

int main (){
    Time time1;
    Time time2;
    std::cout << "Enter time 1 hours:   "; 
    std::cin >> time1.hours;

    std::cout << "Enter time 1 minutes:   ";
    std::cin >> time1.minutes;

    std::cout << "Enter time 1 secconds:   ";
    std::cin >> time1.seconds;

    std::cout << "Enter time 2 hours:   "; 
    std::cin >> time2.hours;

    std::cout << "Enter time 2 minutes:   ";
    std::cin >> time2.minutes;

    std::cout << "Enter time 2 secconds:   ";
    std::cin >> time2.seconds;

    int result1time = (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds;
    int result2time = (time2.hours * 3600) + (time2.minutes * 60) + time2.seconds;

    std::cout << "Difference: " << result1time - result2time << std::endl;
}
