#include <iostream>
#include <string>

int main() {

    const int TAMV=3;
    std::string vectorPalabras[TAMV]={{"pepe"},{"paco"},{"pacopepe"}}, palabra="";
    std::string palabraIntroducida = "";
    int selectorMenu=0, letra=0, fallo=0, selectorPalabra=0;

    // MENU PRINCIPAL
    do {
       std::cout << "[1] Elegir palabra." << std::endl;
       std::cout << "[-] Adivinar palabra." << std::endl;
       std::cout << "[3] Salir." << std::endl;
       std::cout << std::endl;
       std::cout << "Elige una opcion: "; std::cin >> selectorMenu;

    } while (selectorMenu!=1 && selectorMenu!=3);
    
    //INTRODUCIR PALABRA
    if (selectorMenu==1) {
        std::cout << "ELIGE UNA PALABRA: " << std::endl;

        for (int i = 0; i < TAMV; i++){
            std::cout << i+1 << ". " << vectorPalabras[i] << std::endl;
        }

        std::cout << std::endl;
        std::cout << "Indice de la palabra: "; std::cin >> selectorPalabra;

        palabra = vectorPalabras[selectorPalabra-1];

        do {
            std::cout << "[-] Introducir palabra." << std::endl;
            std::cout << "[2] Adivinar palabra." << std::endl;
            std::cout << "[3] Salir." << std::endl;
            std::cout << std::endl;
            std::cout << "Elige una opcion: "; std::cin >> selectorMenu;

        } while (selectorMenu!=2 && selectorMenu!=3);
    }
    
    //SALIR JUEGO
    if (selectorMenu==3) {
        std::cout << std::endl;
        std::cout << "Has salido del juego." << std::endl;
        return 0;
    }

    //JUEGO
    if (selectorMenu==2) {
        std::cout << "Debes de adivinar la palabra introducida anteriormente, " << std::endl;
        std::cout << "recuerda que solo puedes tener 6 fallos." << std::endl;

        int tamPalabra = palabra.length();

        for (int i = 0; i < tamPalabra; i++) {
            std::cout << "_ ";
        } 

        std::cout << std::endl;
        std::cout << std::endl;

        do {
            for (int i = 0; i < tamPalabra; i++) {

                if (palabraIntroducida[i]!=palabra[i]) {
                    std::cout << "Introduzca la " << i+1 << "º letra:";
                    std::cin >> palabraIntroducida[i];

                    if (palabraIntroducida[i]==palabra[i]) {
                        letra++;
                    }
                    
                    if (palabraIntroducida[i] != palabra[i]) {
                        ++fallo;
                        std::cout << "Has fallado... Te quedan " << 6-fallo << " fallos." << std::endl;
                    }

                    if (fallo==6) {
                        std::cout << std::endl;
                        std::cout << "--== HAS PERDIDO ==--" << std::endl;
                        return 0;
                    }

                    for (int j = 0; j < tamPalabra; j++) {
                        if (palabraIntroducida[j] == palabra[j]) {
                            std::cout << palabraIntroducida[j] << " ";
                        } else {
                            std::cout << "_ ";
                        }
                    }
                    std::cout << std::endl;
                    std::cout << std::endl;
                }
            }
            
        } while (letra != tamPalabra);
    }

    std::cout << "¡ENHORABUENA! Has completado la palabra correctamente." << std::endl;
    
return 0;
}