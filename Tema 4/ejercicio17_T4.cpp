#include <iostream>

int main() {

    int edad=1, codigoRegistro=0, porcentajeEdad=0, porcentajeSexo=0, porcentaceConductores=0, 
    edadNum=0, sexoNum=0, sexoEdadNum=0, personas=0;
    char sexo='a';

    while (edad != 0) {
        std::cout << "Introduzca la edad del conductor: " << std::endl;
        std::cin >> edad;
        if (edad < 25 && edad > 17) {
            edadNum++;
        }

        if (edad != 0) {
            personas++;
            std::cout << "Introduzca su sexo ([M] o [F]): " << std::endl;
            std::cin >> sexo;
            if (sexo == 'F') {
                sexoNum++;
            }
            if (sexo== 'M' && (edad>=18 && edad<=25)) {
                sexoEdadNum++;
            }
            std::cout << "Introduce el codigo de registro ([1] para los registrado en la ciudad de Jaen " << std::endl;
            std::cout << "o [0] para los registrado fuera de la ciudad de Jaen): " << std::endl;
            std::cin >> codigoRegistro;
        }
    }

    std::cout << "- El porcentaje de conductores menores de 25 años es: " <<
    (100*edadNum)/personas << " %" << std::endl;

    std::cout << "- El porcentaje de conductoras: " << 
    (100*sexoNum)/personas << " %" << std::endl;

    std::cout << "- El porcentaje de conductores masculinos con edades comprendidas" << std::endl;
    std::cout << "entre 18 y 25 años: " << (100*sexoEdadNum)/personas << " %" << std::endl;

return 0;    
}