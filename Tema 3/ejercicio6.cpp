#include <iostream>

int main() {
    
    int numeroX=0, numeroY=0, numeroZ=0;

    std::cout << "Introduzca tres numeros separados por un espacio: " << std::endl;
    std::cin >> numeroX >> numeroY >> numeroZ;

    if (numeroX > numeroY && numeroX > numeroZ) {
        std::cout << "El numeron" << numeroX << " es mayor que " << numeroY << " y " << numeroZ << "." << std::endl;
    } else {
        if (numeroY > numeroX && numeroY > numeroZ) {
            std::cout << "El numero " << numeroY << " es mayor que " << numeroX << " y " << numeroZ << "." << std::endl;
        } else {
            if (numeroZ > numeroX && numeroZ > numeroY) {
                std::cout << "El numero " << numeroZ << " es mayor que " << numeroY << " y " << numeroX << "." << std::endl;
            } else {
                std::cout << "Los numeros son iguales." << std::endl;
            }
        }
    }

return 0;

}