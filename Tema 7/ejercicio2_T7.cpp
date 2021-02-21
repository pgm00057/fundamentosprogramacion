#include <iostream>

using namespace std;

void intercambiarValores(int *pValA, int *pValB);

int main() {
    int valorA=6, valorB=17;
    int *pValorA=&valorA, *pValorB=&valorB;

    intercambiarValores(pValorA, pValorB);

    cout << "Valor A: " << valorA << endl;
    cout << "Valor B: " << valorB << endl;

return 0;
}

void intercambiarValores(int *pValA, int *pValB){
    int auxiliar=0;
    auxiliar=*pValA;
    *pValA=*pValB;
    *pValB=auxiliar;
}