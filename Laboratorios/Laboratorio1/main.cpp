#include <iostream>
#include "Contacto.hpp"
#include "Funciones.hpp"

#define MAX_CONTACTOS 100

enum Opciones {//es un conjunto de defines
    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR
};

int main(){
    Contacto listaContactos[MAX_CONTACTOS];//se asume que cualquier elemento que se trate de acceder cuando este vacio
    //se va a acceder a elementos basuras
    int numContactos = 0;
    int opcion;


    do
    {
        std::cout << "\nMenu:\n";
        std::cout << "1. Agregar Contacto\n";
        std::cout << "2. Mostrar Contactos\n";
        std::cout << "3. Buscar Contacto\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese opcion: \n";
        std::cin >> opcion;

        switch (opcion){//funciones de Funciones.cpp
        case AGREGAR:
            agregarContactos(listaContactos,numContactos);//aqui no se ocupo el * porque se tiene un parametro por referencia
            //aqui se esta enviando la referencia, haciendo que tambien se cambie el original tambien
            break;
        case MOSTRAR:
            mostrarContactos(listaContactos,numContactos);
            break;
        case BUSCAR:
            buscarContactos(listaContactos,numContactos);
            break;
        case SALIR:
            std::cout << "Saliendo del programa...\n";
        default://saliendo del programa
            std::cout << "Opcion no valida. Intente de nuevo...\n";
            break;
        }
    } while (opcion != SALIR);//estamos asumiendo el happy path.


    
    return 0;
}

