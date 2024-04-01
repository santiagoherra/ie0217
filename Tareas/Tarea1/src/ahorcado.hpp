/**
 * @file ahorcado.hpp
 * @author Santiago Herra santiago.herra@ucr.ac.cr
 * @brief Este es el header de el juego Ahorcado.
 * @version 0.1
 * @date 2024-03-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <iostream>
#include <string>

/// @brief Variables inicializadas de manera externa para el resto del programa.///
extern std::string listaPalabras[100];
extern int palabras_agregadas;

/// @brief struct de ahorcado para mantener toda la informacion del juego.
struct ahorcado{
    std::string palabra;
    std::string palabraAdivinada;
    int intentos_max;
    int intentos_realizados;
};

#endif