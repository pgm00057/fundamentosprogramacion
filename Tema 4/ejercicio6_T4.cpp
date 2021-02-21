#include <iostream>

int main() {
    
    int suma=0, cuadrado=0;

    for (int i = 1; i <= 10; i++) {
        cuadrado = i*i;
        suma += cuadrado;
    }

    std::cout << "El resultado de la suma: " << suma << std::endl;

return 0;
    
}