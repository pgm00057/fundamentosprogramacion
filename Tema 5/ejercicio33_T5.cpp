#include <iostream>
#include <string>

int main() {

    std::string frase="";
    const char ESPACIO = ' ';
    bool espacio=false, letra=false;

    std::cout << "Introduzca una frase cualquiera: " << std::endl;
    std::getline(std::cin>>std::ws, frase);

    int tamFrase = frase.length(), palabras=1;

    for (int i = 0; i < tamFrase; i++){
        espacio = false, letra = false;
        
        if (frase[i] == ESPACIO) {
            espacio = true;
            if (frase[i+1] != ESPACIO){
                letra = true;
            }
        }

        if (espacio==true && letra==true) {
            palabras++;
        }
    }

    std::cout << "La frase contiene " << palabras << " palabras." << std::endl;

return 0;
}