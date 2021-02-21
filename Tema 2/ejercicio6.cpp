#include <iostream>

int main() {

    float notaA, notaB, notaC, notaD, notaMedia;

    std::cout << "Introduzca la nota de los alumnos A, B, C y D respectivamente: " << std::endl;
    std::cin >> notaA >> notaB >> notaC >> notaD;

    std::cout << "La nota media es: " << (notaA + notaB + notaC + notaD) / 4 << std::endl;
    
    return 0;

}