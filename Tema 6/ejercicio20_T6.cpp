#include <iostream>
using namespace std;

int valorMinFilas(int matriz[][3], int filas, int columnas);

int main() {
    const int FILAS=3, COLUMNAS=3;
    int matrizValores[FILAS][COLUMNAS]={{2,4,7},{1,9,1},{8,3,6}};
    int selectorFila=0;

    cout << "Elige una fila (0, 1 o 2): ";
    cin >> selectorFila;

    cout << "El valor mas pequeño de la fila " << selectorFila << " es: " << valorMinFilas(matrizValores, selectorFila, COLUMNAS) << endl;
}

int valorMinFilas(int matriz[][3], int filas, int columnas) {
    int valorMenor;
    valorMenor = matriz[filas][0];
    for (int i = 0; i < columnas; i++) {
        if (valorMenor > matriz[filas][i]) {
            valorMenor = matriz[filas][i];
        }
    }
    
return valorMenor;
}