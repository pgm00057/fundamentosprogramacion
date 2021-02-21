#include <iostream>

int main() {

    int numeroX = 0;

    do {
        std::cout << "Introduce un numero del 1 al 10: " << std::endl; 
        std::cin >> numeroX;
    } while ((numeroX<1) || (numeroX>10));
    
    for (int i = 0; i <= 10; i++) {
        std::cout << numeroX << " x " << i << " = " << numeroX * i << std::endl;
    }
    
return 0;

}