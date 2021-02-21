#include <iostream>

int main() {

    const int TAMV=3;
    int matriz[TAMV][TAMV]= {{34,26,9},{76,24,75},{23,2,35}}, diagonal[TAMV];

    for (int i = 0; i < TAMV; i++) {
        diagonal[i] = matriz[i][i];
    }
    
    std::cout << "La diagonal de la matriz es: " << diagonal[0] << " " << diagonal[1] << " "
    << diagonal[2] << std::endl;

return 0;
}