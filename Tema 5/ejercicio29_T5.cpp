
#include <iostream>
#include <string>

int main() {

    std::string linea="", lineaMayor="", lineaMenor="";

    do {

        if (linea.length() > lineaMayor.length()) {
            lineaMayor = linea;
        }
        
        if (linea.length() < lineaMenor.length()) {
           lineaMenor = linea; 
        } else if(lineaMenor == "") {
            lineaMenor = linea;
        }

        std::cout << "Introduzca una linea de texto: " << std::endl;
        std::getline(std::cin>>std::ws, linea);
        
    } while (linea != "FIN");
    
    std::cout << "La linea mayor ha sido: " << lineaMayor << std::endl;
    std::cout << "La linea menor ha sido: " << lineaMenor << std::endl;

return 0;
}
