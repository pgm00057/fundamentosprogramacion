#include <iostream>

int main() {

    int notaDePracticas;
    int notaDeTeoria;
    int notaDePracticacion;
    float notaFinal;

    std::cout << "Introsuza su nota de Practicas, Teoria y Practicacion: " << std::endl;
    std::cin >> notaDePracticas >> notaDeTeoria >> notaDePracticacion;

    std::cout << "Su nota final es: " << (notaDePracticas * 0.3) + (notaDeTeoria * 0.6) +
    (notaDePracticacion * 0.1) << std:: endl;

}