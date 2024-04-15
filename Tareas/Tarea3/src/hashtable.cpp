#include <string>
#include <iostream>
#include "contacto.hpp"

#define CAPACITY 50000 //tamanno de la hash table

unsigned long hash_function(char* str)
{
    unsigned long i = 0;

    for (int j = 0; str[j]; j++)
        i += str[j];

    return i % CAPACITY;
}

//definiendo el tipo de dato que va a ir en la hashtable, copia del contacto en memoria dinamica, osea la estructura.

typedef struct Ht_item
{
    std::string* nombre_telefono;
    Contacto* contacto;
} Ht_item;

// Definiendo la hash table 
typedef struct HashTable
{
    // Contiene un array de punteros
    Ht_item** items;
    int size;
    int count;
} HashTable;

Ht_item* create_item(std::string* nombre_telefono, Contacto* contacto)
{
    // Crea un puntero a un nuevo item
    Ht_item* item = (Ht_item*) malloc(sizeof(Ht_item));
    item->nombre_telefono = (std::string*) malloc(strlen(nombre_telefono) + 1);
    item->contacto = (Contacto*) malloc(strlen(contacto) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);
    return item;
}

