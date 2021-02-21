#include <iostream>

int main() {

    int NumeroX;
    int NumeroY;

    std::cout << "Inserta el Numero X: " << std::endl;
    std::cin >> NumeroX;
    std::cout << "Inserta el Numero Y: " << std::endl;
    std::cin >> NumeroY;

    std::cout << "Suma: " << NumeroX + NumeroY << std::endl;
    std::cout << "Resta: " << NumeroX - NumeroY << std::endl;
    std::cout << "Multiplicacion: " << NumeroX * NumeroY << std::endl;
    std::cout << "Divison: " << NumeroX / NumeroY << std::endl;


    return 0;
}