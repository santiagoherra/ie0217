#ifndef FUNCIONES_CONTACTO_HPP
#define FUNCIONES_CONTACTO_HPP

#include "contacto.hpp"

void agregar_contacto(std::unordered_map<std::string, Contacto >* tabla_hash, Contacto*& cabeza, Contacto* nuevo_contacto_ptr, int* ptr_cantidad);

void eliminar_contacto(std::unordered_map<std::string, Contacto >* tabla_hash, Contacto*& cabeza, Contacto* nuevo_contacto_ptr, int* ptr_cantidad);

void mostrar_contactos_hashtable(std::unordered_map<std::string, Contacto >* tabla_hash);

void mostrar_contactos_telefono(Contacto* nuevo_contacto_ptr, int* ptr_cantidad);




#endif