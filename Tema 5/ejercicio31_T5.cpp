#include <iostream>
#include <string>

int main() {

    std::string frase="";

    std::cout << "Introduce una palabra: ";
    std::getline(std::cin>>std::ws, frase);

    int tamFrase = frase.length() - 1, mitadFrase = tamFrase/2;

    for (int i = 0; i < mitadFrase; i++) {
        int fraseX = i;
        int fraseY = tamFrase - i;

        if (frase[fraseX] != frase[fraseY]) {
            std::cout << "La palabra introducida no es un palindromo." << std::endl;
            return 0;
        }
    }
    
    std::cout << "La palabra introducida es un palindromo." << std::endl;

return 0;
}