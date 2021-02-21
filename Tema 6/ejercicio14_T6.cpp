#include <iostream>
using namespace std;

void numImpares(int vec[], int tam);

int main() {
    int vectorValores[]={3,6,7,3,18};
    const int TAMV=5;

    numImpares(vectorValores, TAMV);

    cout << "Los numeros impares del vector son: ";
    for (int i = 0; i < TAMV; i++) {
        if (vectorValores[i]!=2) {
            cout << vectorValores[i] << " ";
        }
    }
    
return 0;
}

void numImpares(int vec[], int tam){
    for (int i = 0; i < tam; i++) {
        if (vec[i]%2==0) {
            vec[i]=2;
        }
    }
}