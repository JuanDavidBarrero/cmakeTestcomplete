#pragma once
#include "persona.h"

class Estudiante : public Persona {
public:
    Estudiante(const std::string& nombre, int edad, const std::string& programa);
    std::string ObtenerPrograma() const;
private:
    std::string programa_;
};
