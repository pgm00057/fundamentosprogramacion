#include <iostream>
#include <cmath>

int main() {

    double resultado=0;
    int vecesBucle=0;

    std::cout << "Introduce los terminos de aproximacion que desea: " << std::endl;
    std::cin >> vecesBucle;

    for (int i = 1; i <= vecesBucle; i++) {
        resultado = resultado + 6/pow(i,2);
    }

    std::cout << "El numero π con grado " << vecesBucle << " de aproximacion es: " << sqrt(resultado) << std::endl;
    
return 0;    
}