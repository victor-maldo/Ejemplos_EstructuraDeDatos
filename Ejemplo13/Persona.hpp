#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona {
private:
    bool genero; 
    int edad;
    char dni[10];

public:
    Persona(int e); // La edad es un parámetro del constructor
    ~Persona();

    int getEdad();
    bool esMujer();
    void setEdad(int e);
    void mostrar();
};

#endif