#include <iostream>
using namespace std;

void cambioSigno(int vector[], int tam);

int main() {

    int vectorValores[]={3,-2,5,3,6};
    const int TAMV=5;

    cambioSigno(vectorValores, TAMV);

    cout << "Los numeros del vector ahora son: ";
    for (int i = 0; i < TAMV; i++) {
        cout << vectorValores[i] << " ";
    }
    
return 0;
}

void cambioSigno(int vector[], int tam) {
    for (int i = 0; i < tam; i++) {
        vector[i]=-vector[i];
    }
}