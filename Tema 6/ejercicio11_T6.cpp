#include <iostream>
using namespace std;

bool ordenVector(int vec[], int tam);

int main() {
    const int TAMV=8;
    int vectorValores[]={1,2,3,4,5,6,7,8};

    if (ordenVector(vectorValores, TAMV)==true) {
        cout << "El vector esta no ordenado crecientemente." << endl;
    } else {
        cout << "El vector esta ordenado crecientemente." << endl;
    }
    
return 0;
}

bool ordenVector(int vec[], int tam) {
    int numAnteriorVec=vec[0];
    bool centinela=false;
    for (int i = 0; i < tam; i++) {
        if (vec[i]<numAnteriorVec) {
            centinela=true;
            break;
        }
        numAnteriorVec=vec[i];
    }
return centinela;
}