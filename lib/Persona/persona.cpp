#include "persona.h"

Persona::Persona(const std::string& nombre, int edad) : nombre_(nombre), edad_(edad) {}

std::string Persona::ObtenerNombre() const {
    return nombre_;
}

int Persona::ObtenerEdad() const {
    return edad_;
}
