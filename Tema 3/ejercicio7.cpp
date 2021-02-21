#include <iostream>

int main() {
    
    int numeroA=0, numeroB=0, numeroC=0, numeroD=0;

    std::cout << "Introduzca tres numeros separados por un espacio: " << std::endl;
    std::cin >> numeroA >> numeroB >> numeroC >> numeroD;

    if (numeroA > numeroB && numeroA > numeroC && numeroA > numeroD) {
        std::cout << "El numero " << numeroA << " es mayor que " << numeroB << " , " << numeroC << " y " << numeroD <<  "." << std::endl;
    } else {
        if (numeroB > numeroA && numeroB > numeroC && numeroB > numeroD) {
            std::cout << "El numero " << numeroB << " es mayor que " << numeroA << " , " << numeroC << " y " << numeroD <<  "." << std::endl;
        } else {
            if  (numeroC > numeroA && numeroC > numeroB && numeroC > numeroD) {
                std::cout << "El numero " << numeroC << " es mayor que " << numeroB << " , " << numeroA << " y " << numeroD <<  "." << std::endl;
            } else {
                if (numeroD > numeroA && numeroD > numeroB && numeroD > numeroC) {
                    std::cout << "El numero " << numeroD << " es mayor que " << numeroA << " , " << numeroB << " y " << numeroC <<  "." << std::endl;
                } else {
                    std::cout << "Los numeros son iguales." << std::endl;
                }
                
            }
        }
    }

return 0;

}