#include <iostream>

int main() {

    const int TAMV=3;
    int matriz[TAMV][TAMV]={{20,34,75},{56,90,12},{23,45,89}}, matrizTraspuesta[TAMV][TAMV];

    for (int i = 0; i < TAMV; i++) {
        for (int j = 0; j < TAMV; j++) {
            matrizTraspuesta[i][j] = matriz[j][i];
        }
    }
    
    std::cout << "La matriz traspuesta es: " << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < TAMV; i++) {
        std::cout << "| ";
        for (int j = 0; j < TAMV; j++) {
            std::cout << matrizTraspuesta[i][j] << " ";
        }
        std::cout << "|";
        std::cout << std::endl;  
    }

return 0;
}