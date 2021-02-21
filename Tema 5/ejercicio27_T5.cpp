#include <iostream>

int main() {

    const int TAMV=3;
    int matrizA[TAMV][TAMV], matrizB[TAMV][TAMV];

    for (int i = 0; i < TAMV; i++) {
        for (int j = 0; j < TAMV; j++){
        std::cout << "Posicion (" << i + 1 << "," << j + 1 << "): "; std::cin >> matrizA[j][i];
        matrizB[j][2-i]=matrizA[j][i];
        }
    }

    std::cout << "La matriz original es: " << std::endl;
    for (int i = 0; i < TAMV; i++) {
        std::cout << "| ";
        for (int j = 0; j < TAMV; j++) {
            std::cout << matrizA[j][i] << " ";
        }
        std::cout << "|";
        std::cout << std::endl;  
    }

    std::cout << "La matriz que se obtiene es: " << std::endl;
    for (int i = 0; i < TAMV; i++) {
        std::cout << "| ";
        for (int j = 0; j < TAMV; j++) {
            std::cout << matrizB[j][i] << " ";
        }
        std::cout << "|";
        std::cout << std::endl;  
    }
    
return 0;
}