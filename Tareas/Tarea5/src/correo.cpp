#include "correo.hpp"
#include <regex>
#include <stdexcept>

void ValidarEmail::conseguirCorreo(){
    std::string correo_comprobar;

    std::cout << "Ingresa el correo que deseas validar" << std::endl;
    getline(std::cin,correo_comprobar);

    correo = correo_comprobar;

}

void ValidarEmail::validarCorreo(){
    std::regex patron(R"(([A-Za-z0-9._%+-]+)@([A-Za-z0-9.-]+)\.([A-Z|a-z]{2,}))");
    std::smatch partes;

   bool encontrado = std::regex_search(correo, partes, patron);

    if (encontrado && partes.size() == 4) { // partes.size() debe ser 4 (0 para el total, y 1-3 para los grupos)
        nombre = partes[1].str();
        dominio = partes[2].str();
        extension = partes[3].str();
    } else {
        // Lanzar una excepción personalizada si no se encuentra la coincidencia
        throw std::invalid_argument("El formato del correo no es válido.");
    }

    //validacion de nombre 
    try{

        std::regex patron_inicio_final(R"(^[a-zA-Z0-9].*[a-zA-Z0-9]$)");

        std::regex patron_caracteres_especiales(R"(([_.-]{2,}))");

        bool condicion1 = std::regex_match(nombre,patron_inicio_final);

        bool condicion2 = std::regex_match(nombre, patron_caracteres_especiales);

        int contador = 0;

        for(char caracter : nombre){
            contador++;
        }

        if(!condicion1)
            throw "El nombre comienza o termina con un . - _";
        
        if(!condicion2)
            throw "El nombre posee caracteres especiales";

    }
       

}