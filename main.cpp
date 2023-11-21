#include "Persona.h"
#include "Estudiante.h"
#include "SimulacroEventos.h"

#include <nlohmann/json.hpp>

#include <iostream>

using json = nlohmann::json;

json miObjetoJson;

int main()
{
    // Crear una instancia de Persona
    Persona persona1;
    persona1.setNombre("Carlos");
    persona1.setEdad(30);

    // Mostrar información de la Persona
    std::cout << "Información de la Persona:" << std::endl;
    std::cout << "Nombre: " << persona1.getNombre() << std::endl;
    std::cout << "Edad: " << persona1.getEdad() << " años" << std::endl;
    persona1.saludar();
    std::cout << std::endl;

    // Simulación de eventos de un simulacro con un while
    EventoSimulacro evento = EVACUACION;

    while (evento <= SIMULACRO_COMPLETADO)
    {
        switch (evento)
        {
        case EVACUACION:
            std::cout << "¡Evacuación! Todos deben abandonar el edificio de inmediato." << std::endl;
            break;
        case INCENDIO:
            std::cout << "¡Incendio! Seguir los protocolos de seguridad contra incendios." << std::endl;
            break;
        case SISMO:
            std::cout << "¡Sismo! Buscar un lugar seguro y protegerse." << std::endl;
            break;
        case PRUEBA_DE_SONIDO:
            std::cout << "Prueba de sonido. No es necesario realizar ninguna acción." << std::endl;
            break;
        case FUGA_DE_GAS:
            std::cout << "¡Fuga de gas! Evacuar el área y reportar a las autoridades." << std::endl;
            break;
        case ALERTA_METEOROLOGICA:
            std::cout << "Alerta meteorológica. Tomar las precauciones necesarias." << std::endl;
            break;
        case AMENAZA_BIOLOGICA:
            std::cout << "¡Amenaza biológica! Seguir los procedimientos de seguridad establecidos." << std::endl;
            break;
        case EJERCICIO_DE_SEGURIDAD:
            std::cout << "Ejercicio de seguridad. Participar activamente según las indicaciones." << std::endl;
            break;
        case SIMULACRO_COMPLETADO:
            std::cout << "Simulacro completado. Regresar a las actividades normales." << std::endl;
            break;
        default:
            std::cout << "Evento no reconocido." << std::endl;
        }

        // Incrementar el evento para la siguiente iteración
        evento = static_cast<EventoSimulacro>(static_cast<int>(evento) + 1);
    }

    Estudiante estudiante1;
    estudiante1.setNombre("Maria");
    estudiante1.setEdad(20);
    estudiante1.setNumeroEstudiante("12345");

    // Mostrar información del Estudiante
    std::cout << "\n\nInformación del Estudiante:" << std::endl;
    std::cout << "Nombre: " << estudiante1.getNombre() << std::endl;
    std::cout << "Edad: " << estudiante1.getEdad() << " años" << std::endl;
    std::cout << "Número de Estudiante: " << estudiante1.getNumeroEstudiante() << std::endl;
    estudiante1.saludar();
    estudiante1.estudiar();

    std::cout << "\n\n"
              << std::endl;

    estudiante1.hacerExamen(EXAMEN_MAT);
    estudiante1.hacerExamen(EXAMEN_INGLES);
    estudiante1.hacerExamen(EXAMEN_PROGRAMACION);
    estudiante1.hacerExamen(EXAMEN_COMPLETO);

    std::cout << "\n\n"
              << std::endl;

    miObjetoJson["nombre"] = "Juan";
    miObjetoJson["edad"] = 25;
    miObjetoJson["soltero"] = true;

    // Convertir el objeto JSON a una cadena y mostrarlo
    std::cout << "Objeto JSON:\n"
              << miObjetoJson.dump(2) << std::endl;

    // Acceder a datos específicos
    std::string nombre = miObjetoJson["nombre"];
    int edad = miObjetoJson["edad"];
    bool soltero = miObjetoJson["soltero"];

    // Mostrar datos
    std::cout << "\nNombre: " << nombre << "\nEdad: " << edad << "\nSoltero: " << std::boolalpha << soltero << std::endl;

    return 0;
}
