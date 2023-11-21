#include "Persona.h"
#include <iostream>

// Constructor por defecto
Persona::Persona() : edad(0) {}

// Métodos de acceso
std::string Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const std::string &nuevoNombre) {
    nombre = nuevoNombre;   
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setEdad(int nuevaEdad) {
    // Validar que la edad sea no negativa
    if (nuevaEdad >= 0) {
        edad = nuevaEdad;
    } else {
        std::cout << "La edad no puede ser negativa. Se establecerá en 0." << std::endl;
        edad = 0;
    }
}

// Otro método
void Persona::saludar() const {
    std::cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << std::endl;
}
