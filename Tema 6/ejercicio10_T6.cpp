#include <iostream>
using namespace std;

int suma(int vec[], int tam);

int main() {
    int vectorValores[]={1,4,3,6,7};
    const int TAMV=5;

    cout << suma(vectorValores, TAMV);

return 0;
}

int suma(int vec[], int tam) {
    int totalSuma=0;
    for (int i = 0; i < tam; i++) {
        totalSuma +=vec[i];
    }
return totalSuma;
}