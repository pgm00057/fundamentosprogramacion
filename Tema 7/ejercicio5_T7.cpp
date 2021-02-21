#include <iostream>

using namespace std;

struct Fecha {
    int dia=0, mes=0, year=0;
};

void mostrarFecha(Fecha fecha);
Fecha *comprobarFecha(Fecha vec[], int tam, Fecha fecha);
int contarOcurrencias(Fecha vec[], int tam, Fecha fecha);

int main() {
    const int TAMV=3;
    Fecha fechas[TAMV]={{22,3,2009}, {13,6,2020}, {12,8,2011}};
    Fecha fechaCualquiera={22,3,2009};

    if (comprobarFecha(fechas, TAMV, fechaCualquiera)==0) {
        cout << "La fecha introducida no esta en el vector." << endl;
    } else {
        cout << "La direccion en memoria de la fecha introducida es: " << endl;
        cout << comprobarFecha(fechas, TAMV, fechaCualquiera) << endl;   
    }

    cout << "La fecha " << fechaCualquiera.dia << "/" << fechaCualquiera.mes << "/" << fechaCualquiera.year << " esta " <<
    contarOcurrencias(fechas, TAMV, fechaCualquiera) << " veces en el vector." << endl;

return 0;
}

Fecha *comprobarFecha(Fecha vec[], int tam, Fecha fecha) {
    for (int i = 0; i < tam; i++) {
        if (vec[i].dia == fecha.dia && vec[i].mes == fecha.mes && vec[i].year == fecha.year) {
            return &vec[i];
        }
    }
return 0;
}

int contarOcurrencias(Fecha vec[], int &tam, Fecha fecha) {
    int contador=0;
    int tamano=tam;
    for (int i = 0; i < tamano; i++) {
        if (comprobarFecha(vec, i, fecha)!=0) {
            contador++;
        }
    }
return contador;    
}