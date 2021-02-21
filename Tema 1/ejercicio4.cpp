 #include <iostream>

/* Cuando introduces un dato donde no corresponde, por ejemplo, introducir un dato tipo
caracter donde se espera un dato de tipo entero, al ejecutar el programa las variables edad y altura
obtienen el valor 0 y la variable sexo no tiene ningun valor */ 

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

