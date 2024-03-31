#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <iostream>
#include <string>

std::string listaPalabras[100];
int palabras_agregadas = 0;

struct ahorcado{
    std::string palabra;
    std::string palabraAdivinada;
    int intentos_max;
    int intentos_realizados;
};

#endif