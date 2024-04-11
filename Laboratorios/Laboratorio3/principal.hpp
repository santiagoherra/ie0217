#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <iostream>
#include <string>

using namespace std;

struct Libro {//struct de libros
    string titulo;
    string autor;
    string genero;
    Libro* siguiente;//genera la lista enlazada entre libros

};

void agregarLibro(Libro*& lista);//funcion para agregar libros

void mostrarLibro(Libro* lista);//funcion para mostrar los libros agregados

void liberarMemoria(Libro*& lista);//liberar la memoria dinamica del libro actual porque siempre se usa el siguiente.
//es como eliminar el enlace cuando esta vacia la lista




#endif