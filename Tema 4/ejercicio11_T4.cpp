#include <iostream>

int main() {
    
    int numeroA=0, numeroB=0, resultado=1;

    std::cout << "Escriba dos numeros enteros separados por un espacio: " << std::endl;
    std::cin >> numeroA >> numeroB;

        for (int i = 1; i <= numeroB; i++) {
            resultado = resultado * numeroA;
        }
    

    std::cout << numeroA << " elevado a " << numeroB << " es igual a: " << resultado << std::endl;    

return 0;
}