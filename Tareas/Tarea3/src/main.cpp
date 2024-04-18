/**
 * @file main.cpp
 * @author Santiago Herra santiago.herra@ucr.ac.cr
 * @brief Es un menu para poder escogiendo  las funciones
 * @version 0.1
 * @date 2024-04-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include "funciones_contacto.hpp"

enum Opciones{ /// Enum para las decisiones del menu
    AGREGAR = 1,
    ELIMINAR,
    MOSTRAR_CLOUD,
    MOSTRAR_TELEFONO,
    SALIR,
};

int main(){
    ///Menu pricipal
    int opcion;
    bool salir = false;

    ///Definiendo la tabla hash
    std::unordered_map<std::string, Contacto > tabla_hash;
    ///Defiendo el puntero de la lista enlazada
    Contacto* cabeza = nullptr;
    ///Inicializacion de la memoria dinamica
    Contacto* nuevo_contacto_ptr = (Contacto*)malloc(100 * sizeof(Contacto));
    ///Inicializacion de los contactos en 0
    int cantidad_contactos = 0 ;
    ///Puntero de la cantidad de datos
    int* ptr_cantidad = &cantidad_contactos;


    do{
        std::cout << "\n Elige una opcion\n";
        std::cout << "1) Agregar contacto\n";
        std::cout << "2) Eliminar contacto\n";
        std::cout << "3) Mostrar contacto en el cloud\n";
        std::cout << "4) Mostrar contactos en el telefono\n";
        std::cout << "5) Salir del programa\n\n";
        std::cin >> opcion;

        switch (opcion) ///Bucle do-while para realizar el menu
        {
        case AGREGAR:
            agregar_contacto(&tabla_hash, cabeza, nuevo_contacto_ptr, ptr_cantidad);
            break;
        
        case ELIMINAR:
            eliminar_contacto(&tabla_hash, cabeza, nuevo_contacto_ptr, ptr_cantidad);
            
            break;
        
        case MOSTRAR_CLOUD:
            mostrar_contactos_hashtable(&tabla_hash);
            break;

        case MOSTRAR_TELEFONO:
            ordenar_contactos_por_nombre(nuevo_contacto_ptr, ptr_cantidad);
            mostrar_contactos_telefono(nuevo_contacto_ptr, ptr_cantidad);
            break;

        case SALIR:
            std::cout << "Saliendo del programa\n" << std::endl;
            salir = true;
            break;
            
        default:
            std::cout << "\n Que deseas hacer? \n" << std::endl;
            break;
        }


    }while(!salir);
};