#include <iostream>
#include <cmath>

using namespace std;

int valorAbsoluto (int numero=0){
    
    abs(numero);

return abs(numero);
}

int main() {

    int numeroCualquiera=0;

    cout << "Introduzca un valor absoluto: ";
    cin >> numeroCualquiera;

    cout << "El valor absoluto de " << numeroCualquiera << " es: " << valorAbsoluto(numeroCualquiera) << endl;

return 0;
}