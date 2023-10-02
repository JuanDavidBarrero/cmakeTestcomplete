#include "estudiante.h"

Estudiante::Estudiante(const std::string& nombre, int edad, const std::string& programa)
    : Persona(nombre, edad), programa_(programa) {}

std::string Estudiante::ObtenerPrograma() const {
    return programa_;
}
