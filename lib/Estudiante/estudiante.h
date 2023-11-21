#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"
#include "ExamenesEstudiante.h"  // Incluir el archivo con la enumeración
#include <string>

class Estudiante : public Persona {
private:
    std::string numeroEstudiante;

public:
    // Constructor por defecto
    Estudiante();

    // Métodos de acceso específicos para Estudiante
    std::string getNumeroEstudiante() const;
    void setNumeroEstudiante(const std::string &nuevoNumeroEstudiante);

    // Método específico para Estudiante
    void estudiar() const;

    // Nuevo método para hacer un examen
    void hacerExamen(TipoExamen tipoExamen) const;
};

#endif // ESTUDIANTE_H
