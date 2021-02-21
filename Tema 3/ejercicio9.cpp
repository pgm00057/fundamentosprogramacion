#include <iostream>

int main() {

    char vocal = 'a';

    std::cout << "Introduce una vocal: " << std::endl;
    std::cin >> vocal;

    switch (vocal) {
    case 'a': 
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        std::cout << "La vocal esta en minuscula." << std::endl;
        break;
    
    default:
        std::cout << "La vocal no es minuscula." << std::endl;
        break;
    }
}