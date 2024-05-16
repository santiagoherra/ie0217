/**
 * @file main.cpp
 * @author Santiago Herra
 * @brief Este es el main de la implementacion de la clase ValidarEmail
 * @version 0.1
 * @date 2024-05-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "correo.hpp"

//Enum para las opciones del menu
enum opciones{
    CORREO = 1,
    SALIR,
};

int main(){
    bool salir = false;
    int opcion;
    ValidarEmail correo;
    std::string correo_comprobar;

    do{//Menu para el usuario para validar el correo
        std::cout << "\nQue desea realizar?\n" << std::endl;
        std::cout << "1) Validar correo electronico\n" << std::endl;
        std::cout << "2) Salir\n" << std::endl;
        std::cin >> opcion;

        switch (opcion){
        case CORREO:
            correo.conseguirCorreo();
            correo.validarCorreo();
            break;
        
        case SALIR:
            salir = true;
            std::cout << "Saliendo del programa" << std::endl;
            break;

        default:
            break;
        }
    }
    while(!salir);
    
}