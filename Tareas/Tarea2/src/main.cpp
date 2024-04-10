#include <iostream>
#include "planeta_funciones.cpp"
#include "planeta.hpp"

enum Opciones{ /// enum para las decisiones del menu
    IMPRIMIR_INFORMACION = 1,
    COMPARAR_PAISES,
    AGREGAR_PAIS,
    ELIMINAR_PAIS,
    SALIR,
};

int main(){
    ///menu pricipal
    int opcion;
    bool salir = false;
    Planeta planeta1;

    do{
        std::cout << "\n Elige una opcion\n";
        std::cout << "1) Imprimir informacion del planeta\n";
        std::cout << "2) Comparar paises\n";
        std::cout << "3) Agregar un pais al planeta\n";
        std::cout << "4) Eliminar un pais del planeta\n";
        std::cout << "5) Salir del programa\n";
        std::cin >> opcion;

        switch (opcion) ///bucle para poder hacer el menu
        {
        case IMPRIMIR_INFORMACION:
            imprimir_planeta(planeta1);
            break;
        
        case COMPARAR_PAISES:

            break;
        
        case AGREGAR_PAIS:
            agregar_pais(planeta1);
            break;

        case ELIMINAR_PAIS:
            eliminar_pais(planeta1);
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