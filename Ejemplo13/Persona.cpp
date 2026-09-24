#include "Persona.hpp"
#include <iostream>
#include <cstdlib> // Para rand()
#include <cstring> // Para strcpy()

using namespace std;

Persona::Persona(int e) {
    edad = e;
    
    // Asignar género automáticamente (0 o 1 al azar)
    genero = rand() % 2; 
    
    // Asignar un DNI automático y muy simple
    strcpy(dni, "12345678A");
    
    // Modificamos un número al azar para que no todos los DNI sean exactamente iguales
    dni[7] = '0' + (rand() % 10); 
}

Persona::~Persona() {
}

int Persona::getEdad() {
    return edad;
}

bool Persona::esMujer() {
    return genero == 1;
}

void Persona::setEdad(int e) {
    edad = e;
}

void Persona::mostrar() {
    cout << "DNI: " << dni << " | Edad: " << edad;
    
    if (esMujer()) {
        cout << " | Genero: Mujer" << endl;
    } else {
        cout << " | Genero: Hombre" << endl;
    }
}