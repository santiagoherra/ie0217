/**
 * @file contacto.hpp
 * @author Santiago Herra santiago.herra@ucr.ac.cr
 * @brief Este es el header del struct de tipo Contacto, objeto que sera la base del programa
 * @version 0.1
 * @date 2024-04-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>
#include <unordered_map>

/**
 * @brief Es la definicion de contaco
 * @param nombre es el nombre del contacto
 * @param telefono es el telefono del contacto
 * @param siguiente es el enlace al siguiente nodo, porque se genera una lista enlazada con los contactos.
 * 
 */
struct Contacto {
    std::string nombre;
    std::string telefono;
    Contacto* siguiente;
};
    



#endif