#include <iostream>

int main () {

    int numeroA=1, contador=0;

    while (numeroA != 0) {
        std::cout << "Introduzca un numero entero: "; std::cin >> numeroA;
        if (numeroA > 0) {
            ++contador;
        }
    }
    
    std::cout << "Has introducido " << contador << " veces numeros mayores que 0." << std::endl;

return 0;

}