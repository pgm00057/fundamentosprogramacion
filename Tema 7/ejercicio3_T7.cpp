#include <iostream>

using namespace std;

void maximoMinimoDeVector(int vec[], int tam, int *pMax, int *pMin);

int main() {
    const int TAMV=5;
    int vector[TAMV]={3,6,4,8,1};

    int maximo=0, minimo=0;
    int *pMaximo, *pMinimo;
    pMaximo=&maximo;
    pMinimo=&minimo;

    maximoMinimoDeVector(vector, TAMV, pMaximo, pMinimo);

    cout << "El maximo es: " << maximo << " y el minimo es: " << minimo << endl;

return 0;
}

void maximoMinimoDeVector(int vec[], int tam, int *pMax, int *pMin) {
    *pMax=vec[0];
    *pMin=vec[0];

    for (int i = 0; i < tam; i++) {
        if (*pMin>vec[i]) {
            *pMin=vec[i];
        } else if (*pMax<vec[i]) {
            *pMax=vec[i];
        }
    }
}