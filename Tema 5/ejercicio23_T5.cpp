#include <iostream>

int main() {

    const int TAMV=3;
    int matrizA[TAMV][TAMV]={{2,2,3},{4,1,6},{7,8,9}}, 
    matrizB[TAMV][TAMV]={{2,2,3},{4,1,6},{7,8,9}}, matrizResultado[3][3], resultado=0;

    for (int i = 0; i < TAMV; i++) {
        for (int j = 0; j < TAMV; j++){
            resultado=0;
            for (int k = 0; k < TAMV; k++) {
                resultado = resultado + (matrizA[j][k] * matrizB[k][i]);
            }
            matrizResultado[i][j] = resultado;
        }
    }    

    for (int i = 0; i < TAMV; i++) {
        std::cout << "| ";
        for (int j = 0; j < TAMV; j++) {
            std::cout << matrizResultado[j][i] << " ";
        }
        std::cout << "|";
        std::cout << std::endl;  
    }

return 0;
}