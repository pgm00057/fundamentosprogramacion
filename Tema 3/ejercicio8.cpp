#include <iostream>

int main() {

    int NumeroX=0;

    std::cout << "Introduce un numero entero: " << std::endl;
    std::cin >> NumeroX;

    if (NumeroX % 2 == 0)
    {
        std::cout << "El numero " << NumeroX << " es par." << std::endl;
    } else {
        std::cout << "El numero " << NumeroX << " es impar." << std::endl;
    }
    
return 0;

}