#include <iostream>

int main() {

    int valorFactura, antiguedadFactura;
    float valorTotal;
    const float PORCENTAJE = 0.03;

    std::cout << "Introduzca el precio de la factura:" << std::endl;
    std::cin >> valorFactura;

    std::cout << "Introduzca la antigüedad de la factura: " << std::endl;
    std::cin >> antiguedadFactura;

    valorTotal = valorFactura + (valorFactura * (PORCENTAJE * antiguedadFactura));

    std::cout << "El precio total es: " << valorTotal << std::endl;

    return 0; 
}