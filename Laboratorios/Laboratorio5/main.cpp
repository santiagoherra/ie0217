#include "biblioteca.hpp"
#include <iostream>

int main() {
    Biblioteca miBiblioteca;//Declaracion del objeto de tipo biblioteca
    //Se agregan tipos de libros
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});

    //Primero se ordena y despues se muestra para que salgan ordenados
    miBiblioteca.ordenarLibrosPorAnio();
    miBiblioteca.mostrarLibros();

    //Se busca el libro y se hace una condiciones para ver si si existe.
    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");
    if (libro != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }
    //Agregando mas libros
    Libro libro1("how to make friends and influence people", "Dale Carnegie", 1936);
    Libro libro2("Don Pepe Figueres:La pobreza de las naciones", "Jose Figueres Ferrer", 2020);

    miBiblioteca.agregarLibro(libro1);
    miBiblioteca.agregarLibro(libro2);

    //Utilizando la sobrearga de funciones
    bool mayor = libro1 < libro2;
    if(mayor){
        std::cout << "Verdadero" << std::endl;
    }
    //Ultimo mostrarlibros
    miBiblioteca.ordenarLibrosPorAnio();
    miBiblioteca.mostrarLibros();

    return 0;
}
