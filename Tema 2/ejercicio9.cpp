#include <iostream>
#include <cmath>

int main() {

    int a, b, c;
    float ecuacionPositiva, ecuacionNegativa, raiz;

    std::cout << "Introduca los numeros A, B y C de la ecuacion: " << std::endl;
    std::cin >> a >> b >> c;

    raiz = sqrt(b*b - (4*a*c));

    ecuacionPositiva = (-b + raiz) / (2*a);
    ecuacionNegativa = (-b - raiz) / (2*a);

    std::cout << "El resultado de la ecuacion es: " << ecuacionPositiva << " y " << 
    ecuacionNegativa << std::endl;

    return 0;

}