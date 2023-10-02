#include <iostream>
#include "persona.h"
#include "estudiante.h"

int main() {
    Persona persona("Juan", 30);
    Estudiante estudiante("Ana", 20, "Ingeniería");

    std::cout << "Persona: " << persona.ObtenerNombre() << ", Edad: " << persona.ObtenerEdad() << std::endl;
    std::cout << "Estudiante: " << estudiante.ObtenerNombre() << ", Edad: " << estudiante.ObtenerEdad()
              << ", Programa: " << estudiante.ObtenerPrograma() << std::endl;

    return 0;
}
