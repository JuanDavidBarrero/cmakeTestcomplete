#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor
    Persona();

    // Métodos de acceso
    std::string getNombre() const;
    void setNombre(const std::string &nuevoNombre);

    int getEdad() const;
    void setEdad(int nuevaEdad);

    // Otro método
    void saludar() const;
};

#endif // PERSONA_H
