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

    if (caracterX=='+') {
        std::cout << "El resultado de la suma es: " << i + j << "." << std::endl;
    } else  if (caracterX=='-') {
            std::cout << "El resultado de la resta es: " << i - j << "." << std::endl;    
        } else if (caracterX=='x') {
                std::cout << "El resultado del producto es: " << i * j << "." << std::endl; 
            } else if (caracterX=='/') {
                    std::cout << "El resultado de la division es: " << i / j << "." << std::endl;
                } else {
                    std::cout << "El caracter que ha introducido no es valido." << std::endl;
                }   
return 0;

}   

    
