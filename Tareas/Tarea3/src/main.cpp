#include "iostream"
#include "funciones_contacto.hpp"

enum Opciones{ /// enum para las decisiones del menu
    AGREGAR = 1,
    ELIMINAR,
    MOSTRAR_CLOUD,
    MOSTRAR_TELEFONO,
    SALIR,
};

int main(){
    ///menu pricipal
    int opcion;
    bool salir = false;
    Contacto cabeza;
    std::unordered_map<std::string, Contacto > tabla_hash;

    do{
        std::cout << "\n Elige una opcion\n";
        std::cout << "1) Agregar contacto\n";
        std::cout << "2) Eliminar contacto\n";
        std::cout << "3) Mostrar contacto en el cloud\n";
        std::cout << "4) Mostrar contactos en el telefono\n";
        std::cout << "5) Salir del programa\n";
        std::cin >> opcion;

        switch (opcion) ///bucle para poder hacer el menu
        {
        case AGREGAR:
            agregar();
            break;
        
        case ELIMINAR:
            eliminar();
            break;
        
        case MOSTRAR_CLOUD:
            mostrar_contactos_hashtable(tabla_hash);
            break;

        case MOSTRAR_TELEFONO:
            mostrar_contactos_telefono(cabeza);
            break;

        case SALIR:
            salir = true;
            break;
            
        default:
            continue;
            break;
        }


    }while(!salir);
};