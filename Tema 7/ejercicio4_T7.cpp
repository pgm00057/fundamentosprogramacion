#include <iostream>

using namespace std;

struct Fecha {
    int dia=0;
    int mes=0;
    int year=0;
};

void introducirFecha(Fecha *vec, int tam);

int main() {
const int TAMV=4;
Fecha fechas[TAMV]={{22,3,2002}, {12,5,2020}, {31,12,2021}, {7,7,2007}};

introducirFecha(fechas, TAMV);

return 0;
}

int selecFecha=0;
void introducirFecha(Fecha *vec, int tam) {
cout << "Introduce un dia: ";
cin >> (vec + selecFecha)->dia;

selecFecha++;
}