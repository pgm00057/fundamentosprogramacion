#include <iostream>

int main() {

    float pesoTotal=0,pesoAcumulado=0, pesoIndividual=0;

    std::cout << "Introduce el limite de peso en kg: " << std::endl;
    std::cin >> pesoTotal;

    do {
        std::cout << "Introduce el peso en kg de la presa: " << std::endl;
        std::cin >> pesoIndividual;

        pesoAcumulado = pesoAcumulado + pesoIndividual;

        std::cout << "El peso total de todas las presas es de: " << pesoAcumulado << " kg." << std::endl;

        if (pesoAcumulado > pesoTotal) {
            std::cout << "Has excedido el peso total diario." << std::endl;
            return 0;
        }
    } while (pesoIndividual != 0);

    
return 0;
    
}