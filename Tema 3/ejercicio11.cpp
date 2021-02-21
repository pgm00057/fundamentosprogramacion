#include <iostream>

int main() {

    int edadX=0;

    std::cout << "Introduzca su edad: " << std::endl;
    std::cin >> edadX;

    if (edadX>=18 && edadX<=25) {
        std::cout << "Su edad esta entre los 18 y 25 años." << std::endl;
    } else {
        std::cout << "Su edad no esta entre los 18 y 25." << std::endl;
    }
    
return 0;    

}