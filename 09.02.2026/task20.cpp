#include <iostream>
#include <string>

struct Date{
    int day;
    int month;
    int year;
};

struct Time{
    int hours;
    int minutes;
};

struct Event{
    std::string name;
    Date date;
    Time time;
};

int main(){
    Event event; 

    std::cout << "Enter name:   ";
    getline(std::cin, event.name);

    std::cout << "Enter day:   ";
    std::cin >> event.date.day;

    std::cout << "Enter month:   ";
    std::cin >> event.date.month;

    std::cout << "Enter year:   ";
    std::cin >> event.date.year;

    std::cout << "Enter hours:   ";
    std::cin >> event.time.hours;

    std::cout << "Enter minutes:   ";
    std::cin >> event.time.minutes;

    std::cout << "Event: " << event.name << std::endl;
    std::cout << "When: " << event.date.day << "." << event.date.month << "." << event.date.year << " at " << event.time.hours << ":" << event.time.minutes << std::endl;
}
