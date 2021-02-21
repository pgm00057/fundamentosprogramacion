#include <iostream>

int main() {

    int horas=0, sumaTemp=0, temp=0, tempMax=-100000, tempMin=100000;

    std::cout << "¿Durante cuantas horas se va a tomar la temperatura?" << std::endl;
    std::cin >> horas;

    horas = horas/4;
    std::cout << "Se va a tomar " << horas << " veces la temperatura." << std::endl;

    for (int i = 1; i <= horas; i++) {
        std::cout << "Introduzca la " << i << "º temperatura: " << std::endl;
        std::cin >> temp;
        
        sumaTemp = sumaTemp + temp;

        if (tempMax < temp) {
            tempMax = temp;
        }
        
        if (tempMin > temp) {
            tempMin = temp;
        } 
    }


    std::cout << "La temperatura media es: " << sumaTemp/horas << " °" << std::endl;
    std::cout << "La temperatura maxima es: " << tempMax << " °" << std::endl;
    std::cout << "La temperatura minima es: " << tempMin << " °" << std::endl;
    
    
return 0;
}