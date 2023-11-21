#include "Estudiante.h"
#include <iostream>

// Implementación del constructor por defecto
Estudiante::Estudiante() {}

// Implementación de métodos de acceso específicos para Estudiante
std::string Estudiante::getNumeroEstudiante() const {
    return numeroEstudiante;
}

void Estudiante::setNumeroEstudiante(const std::string &nuevoNumeroEstudiante) {
    numeroEstudiante = nuevoNumeroEstudiante;
}

// Implementación de método específico para Estudiante
void Estudiante::estudiar() const {
    std::cout << getNombre() << " está estudiando como estudiante con número " << numeroEstudiante << "." << std::endl;
}

// Implementación del nuevo método para hacer un examen
void Estudiante::hacerExamen(TipoExamen tipoExamen) const {
    switch (tipoExamen) {
        case EXAMEN_MAT:
            std::cout << getNombre() << " está realizando un examen de Matemáticas." << std::endl;
            break;
        case EXAMEN_FISICA:
            std::cout << getNombre() << " está realizando un examen de Física." << std::endl;
            break;
        case EXAMEN_HISTORIA:
            std::cout << getNombre() << " está realizando un examen de Historia." << std::endl;
            break;
        case EXAMEN_INGLES:
            std::cout << getNombre() << " está realizando un examen de Inglés." << std::endl;
            break;
        case EXAMEN_PROGRAMACION:
            std::cout << getNombre() << " está realizando un examen de Programación." << std::endl;
            break;
        case EXAMEN_COMPLETO:
            std::cout << getNombre() << " ha completado todos los exámenes." << std::endl;
            break;
        default:
            std::cout << getNombre() << " está realizando un examen no reconocido." << std::endl;
    }
}
