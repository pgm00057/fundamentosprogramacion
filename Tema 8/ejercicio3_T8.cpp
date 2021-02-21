#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre="";
    int edad=0;
    string localidad="";
};

Persona *selecciona(Persona vec[], int tam, string loc);

int main() {
    const int TAMV=3;
    Persona personas[TAMV]={{"Pablo", 18, "Arjona"},{"Pepe", 34, "Madrid"},{"Jose", 56, "Estepona"}};
    string localidad="Arjona";
    Persona *pVecLocalidad;
    pVecLocalidad = selecciona(personas, TAMV, localidad);

    for (int i = 0; i < 1; i++) {
        cout << pVecLocalidad[i].edad << " " << pVecLocalidad[i].localidad << " " << pVecLocalidad[i].nombre << endl;
    }

delete[] pVecLocalidad;
return 0;
}

Persona *selecciona(Persona vec[], int tam, string loc){
    int tamVec=0;
    for (int i = 0; i < tam; i++) {
        if (vec[i].localidad == loc) {
            tamVec++;
        }
    }

    Persona *pVecPersonas;
    pVecPersonas = new Persona[tamVec];
    int aux=0;
    for (int i = 0; i < tam; i++) {
        if (vec[i].localidad == loc){
            pVecPersonas[aux] = vec[i];
            aux++;
        }
    }

return &pVecPersonas[0];
}