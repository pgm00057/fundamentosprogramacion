#include <iostream>
#include <stdlib.h>

using namespace std;

void mostrarDatos(int vec[],int tam);

int main() {
int tamVector=0;

cout << "¿Cuando datos vas a introducir?: ";
cin >> tamVector;

int *pDatos;
pDatos = new int[tamVector];

for (int i = 0; i < tamVector; i++) {
    cout << "Introduzca un numero: ";
    cin >> pDatos[i];
}

mostrarDatos(pDatos, tamVector);

delete[] pDatos;
return 0;
}

void mostrarDatos(int vec[], int tam) {
    cout << "Los datos del vector son: ";
    for (int i = 0; i < tam; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}