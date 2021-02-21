#include <iostream>

int main() {

    const int TAMV=5;
    int numeros[TAMV], sumatoria=0;

    for (int i = 0; i < TAMV; i++) {
        std::cout << "Introduzca un numero entero: " << std::endl;
        std::cin >> numeros[i];
    }

    for (int x = 0; x < TAMV; x++) {
        sumatoria = sumatoria + numeros[x];
    }
    
    std::cout << "La sumatoria es: " << sumatoria << std::endl;

return 0;
}