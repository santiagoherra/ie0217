#ifndef FUNCIONES_CONTACTO_HPP
#define FUNCIONES_CONTACTO_HPP

#include <iostream>
#include "contacto.hpp"

void agregar_contacto_hashtable(std::unordered_map<std::string, Contacto >* tabla_hash);

void agregar_contacto_telefono(Contacto*& cabeza);

void eliminar_hashtable_enlace_nodos(std::unordered_map<std::string, Contacto >* tabla_hash);

void eliminar_contacto_telefono(Contacto*& cabeza);

void mostrar_contactos_telefono(Contacto*& cabeza);

void mostrar_contactos_hashtable(const std::unordered_map<std::string, Contacto > tabla_hash);


#endif