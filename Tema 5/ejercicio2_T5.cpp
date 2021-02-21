#include <iostream>

int main() {
    int numeros[5];

    for (int i = 4; i > -1; i--) {
        std::cout << "Introduce un numero entero: " << std::endl;
        std::cin >> numeros[i];
    }
    
    for (int x = 0; x < 5; x++) {
        std::cout << "Numero con indice " << x << ": " << numeros[x] << std::endl;
    }
    
return 0;
}