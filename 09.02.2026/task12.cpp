#include <iostream>

struct Student{
    std::string name;
    int grade;
};
int main (){
    Student student1;
    Student student2;
    Student student3;

    std::cout << "Enter student 1 name:   ";
    getline(std::cin, student1.name);

    std::cout << "Enter student 1 grade:   ";
    std::cin >> student1.grade;

    std::cin.ignore();

    std::cout << "Enter student 2 name:   ";
    getline(std::cin, student2.name);

    std::cout << "Enter student 2 grade:   ";
    std::cin >> student2.grade;

    std::cin.ignore();

    std::cout << "Enter student 3 name:   ";
    getline(std::cin, student3.name);

    std::cout << "Enter student 3 grade:   ";
    std::cin >> student3.grade;

    if (student1.grade > student2.grade && student1.grade > student3.grade)
    {
        std::cout << "Best student: " << student1.name << " (" << student1.grade << ")" << std::endl;
        
    } else if (student2.grade > student1.grade && student2.grade > student3.grade)
    {
        std::cout << "Best student: " << student2.name << " (" << student2.grade << ")" << std::endl;

    } else if (student3.grade > student1.grade && student3.grade > student2.grade)
    {
        std::cout << "Best student: " << student3.name << " (" << student3.grade << ")" << std::endl;
    } 
    
    
}
