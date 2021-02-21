#include <iostream>

int main() {

    char caracterX= 'a';

    std::cout << "Introduzca una letra: " << std::endl;
    std::cin >> caracterX;

   if (caracterX == 'a' || caracterX == 'e' || caracterX == 'i' || caracterX == 'o' || caracterX == 'u') {
        std::cout << "La letra es una vocal minuscula." << std::endl;   
   } else {
       if (caracterX == 'A' || caracterX == 'E' || caracterX == 'I' || caracterX == 'O' || caracterX == 'U') {
           std::cout << "La letra es una vocal mayuscula." << std::endl;
       } else {
           std::cout << "La letra no es una vocal." << std::endl;
       }
       
    return 0;

   }
   
   

    return 0;
    
}