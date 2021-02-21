#include <iostream>

int main() {

    int numero=0, numCero=0;

    for (int i = 1; i <= 10; i++){
        std::cout << "Introduzca un numero: " << std::endl;
        std::cin >> numero;

        if (numero == 0) {
            numCero++;
        } 
    }

    if (numCero != 0){
        std::cout << "El 0 se encontraba entre los numeros introducidos." << std::endl;
    }

    std::cout << "La ejecucion ha terminado." << std::endl;
    
return 0;    
}