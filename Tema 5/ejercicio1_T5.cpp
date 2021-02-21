#include <iostream>

int main() {

    const int TAMV=0;
    int numeros[TAMV];

    for (int i = 0; i < TAMV; i++) {
        std::cout << "Introduce un numero entero: " << std::endl;
        std::cin >> numeros[i];
    }
    
    for (int x = 0; x < TAMV; x++) {
        std::cout << "Numero con indice " << x << ": " << numeros[x] << std::endl;
    }
    

return 0;
}