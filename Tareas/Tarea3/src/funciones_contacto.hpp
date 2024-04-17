/**
 * @file funciones_contacto.hpp
 * @author Santiago Herra santiago.herra@ucr.ac.cr
 * @brief Es el header que define las funciones utilizadas en el archivo
 * @version 0.1
 * @date 2024-04-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef FUNCIONES_CONTACTO_HPP
#define FUNCIONES_CONTACTO_HPP

#include "contacto.hpp"
/**
 * @brief Agrega mis contactos dentro de la tabla hash y dentro de la memoria dinamica dentro del archivo,
 * 
 * @param tabla_hash tabla hash definida como memoria cloud
 * @param cabeza El enlace para las listas enlazadas para la tabla hash (memoria cloud)
 * @param nuevo_contacto_ptr El puntero de la direccion de la memoria dinamica
 * @param ptr_cantidad La cantidad de contactos en la memoria dinamica
 */
void agregar_contacto(std::unordered_map<std::string, Contacto >* tabla_hash, Contacto*& cabeza, Contacto* nuevo_contacto_ptr, int* ptr_cantidad);
/**
 * @brief Elimina contactos de la memoria dinamica con la opcion de borrar los contactos de la memoria cloud
 * 
 * @param tabla_hash tabla hash definida como memoria cloud
 * @param cabeza El enlace para las listas enlazadas para la tabla hash (memoria cloud)
 * @param nuevo_contacto_ptr El puntero de la direccion de la memoria dinamica
 * @param ptr_cantidad La cantidad de contactos en la memoria dinamica
 */
void eliminar_contacto(std::unordered_map<std::string, Contacto >* tabla_hash, Contacto*& cabeza, Contacto*& nuevo_contacto_ptr, int* ptr_cantidad);

/**
 * @brief Muestra los contactos dentro de la hashtable
 * 
 * @param tabla_hash tabla hash definida como memoria cloud
 */
void mostrar_contactos_hashtable(std::unordered_map<std::string, Contacto >* tabla_hash);

/**
 * @brief Muestra los contactos organizados alfabeticamente dentro de la memoria dinamica.
 * 
 * @param nuevo_contacto_ptr El puntero de la direccion de la memoria dinamica
 * @param ptr_cantidad La cantidad de contactos en la memoria dinamica
 */
void mostrar_contactos_telefono(Contacto* nuevo_contacto_ptr, int* ptr_cantidad);

#endif