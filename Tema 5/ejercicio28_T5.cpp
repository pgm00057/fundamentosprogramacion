#include <iostream>
#include <string>

int main() {

    std::string frase="";
    int a=0, e=0, i=0, o=0, u=0;

    std::cout << "Introduzca una frase: " << std::endl;
    std::getline(std::cin>>std::ws, frase);

    for (int j = 0; j < frase.length(); j++) {
        if (frase[j] == 'A' || frase[j] == 'a') {
            a++;
        } else if (frase[j] == 'E' || frase[j] == 'e') {
            e++;
        } else if (frase[j] == 'I' || frase[j] == 'i') {
            i++;
        } else if (frase[j] == 'O' || frase[j] == 'o') {
            o++;
        } else if (frase[j] == 'U' || frase[j] == 'u') {
            u++;
        }
    }

    std::cout << "La vocal A ha salido " << a << " veces." << std::endl;
    std::cout << "La vocal E ha salido " << e << " veces." << std::endl;
    std::cout << "La vocal I ha salido " << i << " veces." << std::endl;
    std::cout << "La vocal O ha salido " << o << " veces." << std::endl;
    std::cout << "La vocal U ha salido " << u << " veces." << std::endl;

return 0;    
}