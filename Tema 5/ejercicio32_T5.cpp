#include <iostream>
#include <string>

int main() {

    std::string frase="";
    const char ESPACIO=' ';
    bool flagX=true, flagY=true;
    int x=0, y=0;

    std::cout << "Introduce una palabra: ";
    std::getline(std::cin>>std::ws, frase);

    int tamFrase = frase.length() - 1, mitadFrase = tamFrase/2;

    for (int i = 0; i < mitadFrase; i++) {
        if (flagX==false) {
            x++;
        }
        if (flagY==false) {
            y++;
        }
        
        int fraseX = i + x;
        int fraseY = tamFrase - i - y;
        
        flagX=true;
        if (frase[fraseX] == ESPACIO){
            ++fraseX;
            flagX = false;
        } 
        flagY=true;
        if (frase[fraseY] == ESPACIO) {
            --fraseY;
            flagY=false;
        }
        
        if (frase[fraseX] != frase[fraseY]) {
            std::cout << "La frase introducida no es un palindromo." << std::endl;
            return 0;
        }
    }
    
    std::cout << "La frase introducida es un palindromo." << std::endl;

return 0;
}