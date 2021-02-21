#include <iostream>
#include <cmath>

int main() {

    int ladoA=0, ladoB=0, ladoC=0;

    std::cout << "Introduzca la longitud de lado mas grande: " << std::endl;
    std::cin >> ladoA;

    std::cout << "Introduzca la longitud de los demas lados separadas por un espacio: " << std::endl;
    std::cin >> ladoB >> ladoC;

    if (ladoA >= ladoB + ladoC ) {
        std::cout << "Las medidas introducidas no pertenecen a un triangulo." << std::endl;
    } else {
        if (ladoA^2 == ladoB^2 + ladoC^2) {
            std::cout << "Las medidas introducidas pertenecen a un triangulo rectangulo." << std::endl;
        } else {
            if (ladoA^2 < ladoB^2 + ladoC^2) {
                std::cout << "Las medidas introducidas pertenecen a un triangulo acutangulo." << std::endl;
            } else {
                if (ladoA^2 > ladoB^2 + ladoC^2) {
                    std::cout << "Las medidas introducidas pertenecen a un triangulo obstusangulo." << std::endl;
                }   
            }   
        }
    }

 return 0;   
    
}