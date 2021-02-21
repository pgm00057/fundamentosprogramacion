#include <iostream>

int main() {

    int numeroLongitud=0;

    std::cout << "Introduce la longitud de la base y la altura del triangulo: " << std::endl;
    std::cin >> numeroLongitud;

    if (numeroLongitud < 1) {
        std::cout << "La longitud introducida no es valida." << std::endl;
        return 0;
    }
    
    for (int y = 1; y <= numeroLongitud; y++) {
        
        for (int x = 0; x < y; x++) {
            std::cout << "* ";
        }

        std::cout << std::endl;

    }

    std::cout << std::endl;
    std::cout << "Se ha dibujado un triangulo de base y altura " << numeroLongitud << " correctamente."<< std::endl;

return 0;

}