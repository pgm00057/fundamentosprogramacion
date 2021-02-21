#include <iostream>

int main() {

    int NumeroA=0, NumeroB=0;

    std::cout << "Introduce un dos numeros separados por un espacio: " << std::endl;
    std::cin >> NumeroA >> NumeroB;

    if (NumeroA < NumeroB) {
        std::cout << NumeroB << " es mayor que " << NumeroA << std::endl;
    } else if (NumeroA > NumeroB){
            std::cout << NumeroA << " es mayor que " << NumeroB << std::endl;
        } else {
            std::cout << NumeroA << " es igual que " << NumeroB << std::endl;
        }

}
