#include <iostream>
#include "estudiante.hpp"

Estudiante::Estudiante(//Constructor de la clase estudiantes
    const std::string& nombre, int edad
) : nombre(nombre), edad(edad) {}

void Estudiante::mostrarDatos() {//Declaracion del metodo mostrar datos
    std::cout << "Nombre: " << nombre;
    std::cout << ", Edad: " << edad << std::endl;
}
