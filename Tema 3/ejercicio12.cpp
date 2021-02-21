#include <iostream>

int main() {

    int numeroA=0, numeroB=0, numeroC=0, numeroD=0;

        std::cout << "Introduzca tres numeros cualquiera separados por un espacio: " << std::endl;
        std::cin >> numeroA >> numeroB >> numeroC;

        std::cout << "Introduzca otro numero cualquiera: " << std::endl;
        std::cin >> numeroD;

        if (numeroA==numeroD || numeroB==numeroD || numeroC==numeroD) {
            std::cout << "El numero " << numeroD << " es igual que el numero " << numeroD << "." << std::endl;
        } else {
            std::cout << "Ningun numero de los introducidos coincide." << std::endl;
        }

    return 0;  
}