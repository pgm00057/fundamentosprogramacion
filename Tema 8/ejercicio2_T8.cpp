#include <iostream>
#include <stdlib.h>

using namespace std;

void mostrarDatos(int vec[], int tam);
void calculoSerieFibonacci(int vec[], int tam);

int main() {
int tamVec=0;

cout << "¿Cuantos numeros quieres calcular?: ";
cin >> tamVec;

int *pDatos;
pDatos = new int[tamVec];

calculoSerieFibonacci(pDatos, tamVec);

mostrarDatos(pDatos, tamVec);

delete pDatos;
return 0;
}

void calculoSerieFibonacci(int vec[], int tam) {
    vec[0]=0;
    vec[1]=1;
    for (int i = 2; i < tam; i++) {
        vec[i] = vec[i-2] + vec[i-1];
    }
}

void mostrarDatos(int vec[], int tam) {
    cout << "Los datos del vector son: ";
    for (int i = 0; i < tam; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}