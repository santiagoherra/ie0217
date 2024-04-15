#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>
#include <unordered_map>

//Definicion de estructura llamada cotancto
struct Contacto {
    std::string nombre;
    std::string telefono;
    Contacto* siguiente;
};
    
//Definicion de tabla hash
std::unordered_map<std::string, Contacto > tabla_hash;


#endif