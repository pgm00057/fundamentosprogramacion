#include <iostream>

int main() {

    char caracter='a';
    int vecesBucle=0, vecesVocalMin=0;

    while ((caracter != '+') && (caracter != '-')) {
        std::cout << "Introduzca un caracter cualquiera: " << std::endl;
        std::cin >> caracter;
        vecesBucle++;

        switch (caracter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vecesVocalMin++;
            break;
        }
    }
    
    std::cout << "Al introducir el caracter '" << caracter << "' has parado la ejecucion." << std::endl;

    if ((vecesBucle - 1) == vecesVocalMin) {
        std::cout << "Todas los caracteres introducidos hasta ahora eran vocales minusculas." << std::endl;
    } 
    
    
return 0;
}