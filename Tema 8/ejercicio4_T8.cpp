#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string *vectorDinamicoString(int tam);
void mostrarVector(string vec[], int tam);
string *vectorNuevo(string vec[], int tamVec, int tam);

int main() {
    int tamVector=4;
    string *pVectorStrings= vectorDinamicoString(tamVector);

    mostrarVector(pVectorStrings, tamVector);

    int tamVectorNuevo=6;
    string *pVectorNuevo=0;
    pVectorNuevo = vectorNuevo(pVectorStrings, tamVector, tamVectorNuevo);

    mostrarVector(pVectorNuevo, tamVectorNuevo);

delete[] pVectorNuevo;
return 0;
}

string *vectorDinamicoString(int tam){
    string *pVector=0;
    pVector = new string[tam];

    for (int i = 0; i < tam; i++) {
        cout << "Introduce una cadena de caracteres: ";
        getline(cin>>ws, pVector[i]);
    }

return pVector;
}

void mostrarVector(string vec[], int tam){
    for (int i = 0; i < tam; i++) {
        cout << vec[i] << endl;   
    }
}

string *vectorNuevo(string vec[], int tamVec, int tam){
    string *pVecNuevo = new string[tam];

    for (int i = 0; i < tamVec; i++) {
        pVecNuevo[i] = vec[i];
        if (tam == tamVec) {
            break;
        }
    }

    delete[] vec;

    if (tam > tamVec) {
        for (int i = tamVec; i < tam; i++) {
            cout << "Introduce una cadena de caracteres: ";
            getline(cin>>ws, pVecNuevo[i]);
        }
    }
    
    return &pVecNuevo[0];
}