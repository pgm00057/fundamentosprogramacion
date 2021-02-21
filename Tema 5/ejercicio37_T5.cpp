#include <iostream>

int main() {

    double horasTotal=0, minutosTotal=0, segundosTotal=0;

    struct DuracionEtapa {
        int horas=0, minutos=0, segundos=0;
    };

    DuracionEtapa etapas[]={{4,35,27},{5,15,24},{4,47,55}};
    const int NUMETAPAS=3;

    for (int i = 0; i < NUMETAPAS; i++) {
        segundosTotal += etapas[i].segundos;
        minutosTotal += etapas[i].minutos;
        horasTotal += etapas[i].horas;
    }
    
    while (segundosTotal >= 60) {
        minutosTotal++;
        segundosTotal -= 60;
    }
    
    while (minutosTotal >= 60) {
        horasTotal++;
        minutosTotal -= 60;
    }
    
    std::cout << "El ciclista ha recorrido en total: " << horasTotal << " horas, " << 
    minutosTotal << " minutos y " << segundosTotal << " segundos.";
    
return 0;
}