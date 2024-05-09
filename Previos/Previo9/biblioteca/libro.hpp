#ifndef LIBRO_HPP
#define LIBRO_HPP

#include<string>

class Libro {//Defincion de la clase libro
    public:
    Libro( const std::string& titulo, const std::string& autor);
    void mostrarInfo() const;

    private://Atributos de los libros
    
        std:: string titulo;
        std:: string autor;
};

#endif