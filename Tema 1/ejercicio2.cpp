#include <iostream>

int main() {

    int precioProducto;
    float cantidadIva = 0.21;

    std::cout << "Introduzca el predio del producto: " << std::endl;
    std::cin >> precioProducto;
    
    std::cout << "Precio con IVA: " << precioProducto + (precioProducto * cantidadIva) << "€" <<std::endl;

    return 0;

}