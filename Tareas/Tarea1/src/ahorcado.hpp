#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <iostream>
#include <string>

extern std::string listaPalabras[100];
extern int palabras_agregadas;

struct ahorcado{
    std::string palabra;
    std::string palabraAdivinada;
    int intentos_max;
    int intentos_realizados;
};

#endif