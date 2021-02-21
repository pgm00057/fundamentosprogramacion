#include <iostream>

int main() {

    const int TAMV=3;
    int matriz[TAMV][TAMV];
    bool simetrica=true;

    std::cout << "Introduce una matriz 3x3: " << std::endl;

    for (int i = 0; i < TAMV; i++) {
        for (int j = 0; j < TAMV; j++){
        std::cout << "Posicion (" << i + 1 << "," << j + 1 << "): "; std::cin >> matriz[i][j];             
        }
    }

    for (int i = 0; i < TAMV; i++) {
        for (int j = 0; j < TAMV; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica=false;
                break;
            }
        }
    }
    
    if (simetrica==true) {
        std::cout << "La matriz introducida es simetrica." << std::endl;
    } else if (simetrica==false) {
        std::cout << "La matriz introducida no es simetrica." << std::endl;
    }
    
return 0;
}