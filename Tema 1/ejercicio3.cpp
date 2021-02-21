 #include <iostream>

int main() {

    int edad;
    char sexo;
    float altura;

    std::cout << "Introduzca su edad: " << std::endl;
    std::cin >> edad;
    std::cout << "Intrduzca su sexo [M] O [F]: " << std::endl;
    std::cin >> sexo;
    std::cout << "Intrduzca su altura en metros: " << std::endl;
    std::cin >> altura;

    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Sexo: " << sexo << std::endl;
    std::cout << "Altura: " << altura << std::endl;

    return 0;
    
}