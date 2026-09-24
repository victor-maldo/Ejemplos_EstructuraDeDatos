#include <iostream>
#include "Persona.hpp"

using namespace std;

int main() {
    // Creamos 10 objetos Persona con edades únicas entre el 18 y el 27 directamente
    Persona grupo[10] = {
        Persona(18), Persona(19), Persona(20), Persona(21), Persona(22),
        Persona(23), Persona(24), Persona(25), Persona(26), Persona(27)
    };

    cout << "--- Lista de Personas ---" << endl;

    // Recorremos el arreglo para mostrar la información de cada persona
    for(int i = 0; i < 10; i++) {
        grupo[i].mostrar();
    }

    return 0;
}