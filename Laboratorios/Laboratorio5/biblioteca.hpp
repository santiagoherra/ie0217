#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

//Se realizo un include de las STL vector, algorith y string.
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

//Deficion de la clase Libro
class Libro {
public://Atributos publicos de Libro
    std::string titulo; //Titulo del libro
    std::string autor;//Autor del libro
    int anioPublicacion;//Anno en el que fue publicado

    //Instanciacion del constructor de la clase Libro
    Libro(std::string t, std::string a, int anio);

    //Sobrecargar del operador < para poder comparar los libros segun el anno de publicacion
    bool operator<(const Libro& l) const;
};

//Definicion de la clase Biblioteca, donde se almacenaran los libros
class Biblioteca {
private://Atributo privado donde se almacenaran los libros en un tipo vector.
    std::vector<Libro> libros;

public://Metodos publicos de las funciones que tendra biblioteca.
    //Agrega al final del vector un objeto tipo libro.
    void agregarLibro(const Libro& libro);
    //Mostrar los lbros, no salen ordenados por ser contenedor de tipo vector
    void mostrarLibros();
    //Se ordenan los libros por anno
    void ordenarLibrosPorAnio();
    //Se busca libro segun el titulo usando un iterador en el contenedor vector.
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);
    //Obtiene el iterador que apunto al final del vector
    std::vector<Libro>::iterator end();
};

#endif
