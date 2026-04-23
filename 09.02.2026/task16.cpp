#include <iostream>
#include <string>

struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    std::string name;
    Date date;
};

int main(){
    Student student1;

    std::cout << "Enter student name:   ";
    getline(std::cin, student1.name);

    std::cout << "Enter day:   ";
    std::cin >> student1.date.day;

    std::cout << "Enter month:   ";
    std::cin >> student1.date.month;

    std::cout << "Enter year:   ";
    std::cin >> student1.date.year;

    std::cout << student1.name << " was born on " << student1.date.day << "." << student1.date.month << "." << student1.date.year << std::endl;
}
