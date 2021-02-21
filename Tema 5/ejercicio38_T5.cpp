#include <iostream>
#include <string>

int main() {

    struct Persona {
        std::string nombre="";
        bool alergia = false;
    };

    const int NUMPERSONAS=3;
    Persona personas[NUMPERSONAS]={{"Pablo", false},{"Paco Pepe",true},{"Alfonso",true}}, 
    sinAlergia[NUMPERSONAS], 
    conAlergia[NUMPERSONAS];

    for (int i = 0; i < NUMPERSONAS; i++) {
        if (personas[i].alergia == true) {
            conAlergia[i].nombre = personas[i].nombre;
            conAlergia[i].alergia = true;
        } else {
            sinAlergia[i].nombre = personas[i].nombre;
            sinAlergia[i].alergia = false;
        }
    }
    
    for (int i = 0; i < NUMPERSONAS; i++) {
        if (sinAlergia[i].nombre != "") {
            std::cout << "Nombre: " << sinAlergia[i].nombre << std::endl;
            std::cout << "Alergico: NO" << std::endl;
            std::cout << std::endl;
        } else if (conAlergia[i].nombre != "") {
            std::cout << "Nombre: " << conAlergia[i].nombre << std::endl;
            std::cout << "Alergico: SI" << std::endl;
            std::cout << std::endl;
        }   
    }

return 0;    
}