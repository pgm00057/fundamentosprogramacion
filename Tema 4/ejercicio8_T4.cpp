#include <iostream>

int main() {

    int numero=0;

    do {
        std::cout << "Introduzca un numero entero: " << std::endl;
        std::cin >> numero;
    } while ((numero != 0) && ((numero < 20)||(numero > 30)));

    std::cout << "Has introducido el numero 0 o un numero entre el rango [20,30]." << std::endl;

return 0;   
}