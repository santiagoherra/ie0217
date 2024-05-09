#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

class Estudiante {//Definicon de clase estudiante
public:
    Estudiante(const std::string& nombre, int edad);
    void mostrarDatos();

private:
    std::string nombre;//Atributos de los estudiantes
    int edad;
    int edad2;
};

#endif
