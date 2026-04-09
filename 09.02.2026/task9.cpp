#include <iostream>

struct Complex{
    int real;
    int image;
};
int main (){
    Complex complex1;
    Complex complex2;
    std::cout << "Enter complex 1 - real:   "; 
    std::cin >> complex1.real;

    std::cout << "Enter complex 1 - image:   ";
    std::cin >> complex1.image;

    std::cout << "Enter complex 2 - real:   "; 
    std::cin >> complex2.real;

    std::cout << "Enter complex 2 - image:   ";
    std::cin >> complex2.image;

    int resultReal = (complex1.real + complex2.real);
    int resultImage = (complex1.image + complex2.image);
    std::cout << "Sum: " <<  resultReal << " + " << resultImage << "i" << std::endl;

}
