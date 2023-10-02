#pragma once
#include <string>

class Persona {
public:
    Persona(const std::string& nombre, int edad);
    std::string ObtenerNombre() const;
    int ObtenerEdad() const;
private:
    std::string nombre_;
    int edad_;
};
