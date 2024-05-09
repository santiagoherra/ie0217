#include <iostream>
#include "libro.hpp"

Libro :: Libro(//Constructor de la clase libro
    const std::string& titulo, const std::string& autor
): titulo(titulo), autor (autor){}

void Libro :: mostrarInfo() const {//Declaracion del metodo mostrar info
    std:: cout << "Titulo: " << titulo <<", Autor: "<< autor <<std::endl;

}