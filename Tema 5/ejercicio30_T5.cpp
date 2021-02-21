#include <iostream>
#include <string>

int main() {

    const int TAMV=5;
    std::string vectorNombre[TAMV]={"Pedro", "Paco", "Francisco", "Pepe", "Pablo"};
    std::string nombre="";

    std::cout << "Introduzca un nombre: " << std::endl;
    std::getline(std::cin>>std::ws, nombre);

    for (int i = 0; i < TAMV; i++) {
        if (nombre == vectorNombre[i]) {
            std::cout << "El nombre introducido coincide con un nombre del vector." << std::endl;
            return 0;
        } 
    }

    std::cout << "El nombre introducido no coincide con ningun nombre del vector." << std::endl;
    
return 0;  
}