#include <iostream>
#include "biblioteca.hpp"

void Biblioteca:: agregarLibro(
    const std::string& titulo,
    const std:: string& autor
){
    catalogo.emplace_back(titulo,autor);//Agrega libros y los lleva hacia atras
}

void Biblioteca::mostrarCatalogo(){
    for(const auto& libro : catalogo){
        libro.mostrarInfo();//mostrar libros en el catalogo que es un contenedor
    }
}