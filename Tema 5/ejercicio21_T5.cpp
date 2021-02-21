#include <iostream>

int main() {

    const int TAMV=3;
    int matrizA[TAMV][TAMV]={{34,68,84},{43,90,24},{45,23,74}}, matrizB[TAMV][TAMV]={{14,64,73},{43,29,98},{18,85,45}}, matrizResultado[3][3];

    for (int i = 0; i < TAMV; i++) {
        for (int j = 0; j < TAMV; j++) {
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    std::cout << "El resultado de la suma es: " << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < TAMV; i++) {
        std::cout << "| ";
        for (int j = 0; j < TAMV; j++) {
            std::cout << matrizResultado[i][j] << " ";
        }
        std::cout << "|";
        std::cout << std::endl;  
    }
    
return 0;
}