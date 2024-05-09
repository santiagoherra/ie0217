#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "libro.hpp"

using namespace std;

class Biblioteca{//Definicion de la clase Bilbioteca que contiene a los objetos libro
    public:
        void agregarLibro(//Metodo para agregar un libro
            const std::string& titulo,
            const std::string& autor
    );
        void mostrarCatalogo();//Metodo para mostrar todos los libros en un contenedor

    private:

        std:: vector <Libro> catalogo;
};


#endif