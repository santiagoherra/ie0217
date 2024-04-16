#ifndef FUNCIONES_CONTACTO_HPP
#define FUNCIONES_CONTACTO_HPP

#include <iostream>
#include "contacto.hpp"

void agregar_contacto(std::unordered_map<std::string, Contacto >* tabla_hash, Contacto*& cabeza, Contacto* nuevo_contacto_ptr, int* ptr_cantidad);

void eliminar_contacto(std::unordered_map<std::string, Contacto >* tabla_hash, Contacto*& cabeza, Contacto* nuevo_contacto_ptr, int* ptr_cantidad);

void mostrar_contactos_telefono(Contacto*& cabeza, Contacto* nuevo_contacto_ptr);

void mostrar_contactos_hashtable(const std::unordered_map<std::string, Contacto > tabla_hash);


#endif