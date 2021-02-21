#include <iostream>

int main() {

    int numeroA=0, numeroB=0, resultadoDiv=0, restoDiv=0, numeroMenor=0;

    std::cout << "Introduzca dos numeros separados por un espacio: " << std::endl;
    std::cin >> numeroA >> numeroB;

    if (numeroA > numeroB) {
        resultadoDiv = numeroA / numeroB;
        restoDiv = numeroA % numeroB;
        numeroMenor = numeroB;
    } else if (numeroB > numeroA){
        resultadoDiv = numeroB / numeroA;
        restoDiv = numeroB % numeroA;
        numeroMenor = numeroA;
    } else {
        std::cout << "Los numeros introducidos son iguales." << std::endl;
        return 0;
    }

    if (restoDiv == 0) {
        std::cout << "mcd(" << numeroA << "," << numeroB <<") = " << numeroMenor << std::endl;
    }

    if (restoDiv != 0) {
        std::cout << "mcd(" << numeroA << "," << numeroB << ") = " << "mcd(" << numeroMenor <<
        "," << restoDiv << ")" << std::endl;
    }

    
return 0;

}