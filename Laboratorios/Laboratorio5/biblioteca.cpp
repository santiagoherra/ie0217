//Se incluye el header biblioteca.hpp
#include "biblioteca.hpp"
#include <algorithm>

//Definicion del constructor de la clase Libro
Libro::Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}
//Definicion de la sobrecarga
bool Libro::operator<(const Libro& l) const {
    return anioPublicacion < l.anioPublicacion;
}
//Definicion de agregarLibro
void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}
//Definicion de mostrarLibros
void Biblioteca::mostrarLibros() {
    for (const auto& libro : libros) {
        std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
    }
}
//Definicion de ordenarLibrosPorAnio
void Biblioteca::ordenarLibrosPorAnio() {
    std::sort(libros.begin(), libros.end());
}
//Definicion de buscarLibroPorTitulo
std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
    return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
        return l.titulo == titulo;
    });
}
//Definicion del iterador end()
std::vector<Libro>::iterator Biblioteca::end(){
    return libros.end();
}
