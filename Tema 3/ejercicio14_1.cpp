#include <iostream>

int main() {
    int i=0, j=0, resultado=0;
    char caracterX='a';


    std::cout << "Introduzca un numero entero: " << std::endl;
    std::cin >> i;

    std::cout << "Introduzca +, -, x o /:" << std::endl;
    std::cin >> caracterX;

    std::cout << "Introduzca otro numero entero: " << std::endl;
    std::cin >> j;

    switch (caracterX){
    case '+':
        resultado = i + j;
        break;
    case '-':
        resultado = i - j;
        break;
    case 'x':
        resultado = i * j;
        break;
    case '/':
        resultado = i / j;
        break;
    
    default:
        std::cout << "Operacion no valida." << std::endl;
        break;
    }

    std::cout << "El resultado es: " << resultado << std::endl;

return 0;

}
