#include "correo.hpp"
#include <regex>
#include <stdexcept>

void ValidarEmail::conseguirCorreo(){
    std::string correo_comprobar;

    std::cout << "Ingresa el correo que deseas validar" << std::endl;
    std::cin.ignore();
    getline(std::cin,correo_comprobar);

    correo = correo_comprobar;

}

void ValidarEmail::validarCorreo(){
    bool valido = false;
    std::regex patron(R"(([A-Za-z0-9._%+-]+)@([A-Za-z0-9.-]+)\.([A-Z|a-z]{2,}))");
    std::smatch partes;

   bool encontrado = std::regex_search(correo, partes, patron);
    try{
    if (encontrado && partes.size() == 4) { // partes.size() debe ser 4 (0 para el total, y 1-3 para los grupos)
        nombre = partes[1].str();
        dominio = partes[2].str();
        extension = partes[3].str();
    } else {
        // Lanzar una excepción personalizada si no se encuentra la coincidencia
        throw std::invalid_argument("El formato del correo no es válido.");
    }
    }catch(const std::exception &e){
        std::cerr << "Error encontrado: " << e.what() << std::endl;
        return;
    }

    //validacion de nombre 

    std::cout << nombre << std::endl;
    try{

        std::regex patron_inicio_final(R"(^[a-zA-Z0-9].*[a-zA-Z0-9]$)");

        std::regex patron_caracteres_especiales(R"(([_.-]{2,}))");

        bool condicion1 = std::regex_match(nombre,patron_inicio_final);

        bool condicion2 = std::regex_search(nombre, patron_caracteres_especiales);

        int contador = 0;

        for(char caracter : nombre){
            contador++;
        }

        if(contador > 15){
            throw std::length_error("El nombre posee mas de 15 caracteres");
        }

        if(!condicion1)
            throw std::runtime_error("El nombre comienza o termina con un . - _");
        
        if(condicion2)
            throw std::runtime_error("El nombre posee caracteres especiales");

    }catch(const std::exception&e){
        std::cerr << "Error encontrado: " << e.what() << std::endl;
        valido = true;
        return;
    }catch(...){
        std::cerr << "Error desconocido" << std::endl;
        valido = true;
    }

    //validacion del dominio:

    std::cout << dominio << std::endl;

    if(!valido){
        std::cout << "Correo valido!" <<std::endl;
    }

}