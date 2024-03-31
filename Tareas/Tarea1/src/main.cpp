#include "ahorcado_funciones.hpp"
#include "ahorcado.hpp"
#include <iostream>

enum Opciones{ // enum para las decisiones del menu
    DIFICULTAD = 1,
    INICIAR,
    AGREGAR_PALABRAS,
    VER_PALABRAS,
    SALIR,
};

int main(){
    //menu pricipal
    int opcion;
    bool salir = false;
    int intentos;

    do{
        std::cout << "\n Elige una opcion\n";
        std::cout << "1) Elegir dificultad del juego\n";
        std::cout << "2) Iniciar juego\n";
        std::cout << "3) Agregar palabras al arreglo de palabras que se escogen aleatoriamente\n";
        std::cout << "4) Ver diccionario de palabras\n";
        std::cout << "5) Salir del programa\n";
        std::cin >> opcion;

        switch (opcion) //bucle para poder hacer el menu
        {
        case DIFICULTAD:
            intentos = dificultad();
            break;
        
        case INICIAR:
            iniciar_juego(intentos, listaPalabras, palabras_agregadas);
            break;
        
        case AGREGAR_PALABRAS:
            agregar_palabra(listaPalabras, palabras_agregadas);
            break;

        case VER_PALABRAS:
            ver_palabras(listaPalabras, palabras_agregadas);
            break;

        case SALIR:
            salir = true;
            break;
            
        default:
            int intentos = dificultad();
            break;
        }


    }while(!salir);
};