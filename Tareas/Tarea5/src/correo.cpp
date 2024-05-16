/**
 * @file correo.cpp
 * @author Santiago Herra
 * @brief Este es el archivo que describe los metodos de las clases
 * @version 0.1
 * @date 2024-05-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "correo.hpp"
#include <regex>
#include <stdexcept>

/// @brief Consigue el correo de la persona para poder asignarlo al objeto
void ValidarEmail::conseguirCorreo(){
    std::string correo_comprobar;
    std::cout << "Ingresa el correo que deseas validar" << std::endl;
    std::cin.ignore();
    getline(std::cin,correo_comprobar);

    correo = correo_comprobar;

}

/// @brief Esta es la funcion que valida el correo que ingresa el usuario
void ValidarEmail::validarCorreo(){
    bool valido = false;
    std::regex patron(R"(([A-Za-z0-9._%+-]+)@([A-Za-z0-9.-]+?)\.([A-Za-z]{2,}(?:\.[A-Za-z]{2,})?))");
    std::smatch partes;

    //Booleano para poder separar el correo en partes
    bool encontrado = std::regex_search(correo, partes, patron);
    
    //Variable regex para poder encontrar el @ en el correo
    std::regex arroba_regex(R"(@)");  

    if (!std::regex_search(correo, arroba_regex)) {
        std::cerr << "Error: El correo debe contener el carácter '@'." << std::endl;
    }

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
    }catch(...){
        std::cerr << "Error desconocido" << std::endl;
        valido = true;
    }

    //Validacion de nombre 
    try{
        //Reconoce el patron final e inicial que no tenga caracteres no permitidos
        std::regex patron_inicio_final(R"(^[a-zA-Z0-9].*[a-zA-Z0-9]$)");

        //Reconoce que no tenga los caracteres especiales
        std::regex patron_caracteres_especiales(R"(([_.-]{2,}))");

        //Reconoce si hay caracteres invalidos al inicio o al final
        bool condicion1 = std::regex_match(nombre,patron_inicio_final);

        //Reconoce los caracteres especiales en el nombre
        bool condicion2 = std::regex_search(nombre, patron_caracteres_especiales);

        //Funciona para poder encontrar la longitud del nombre
        int contador;
        contador = nombre.length();

        //Condiciones para poder agarrar las excepciones
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

    //Validacion de dominio

    //Rstringe la longitud del dominio
    int longitud_dominio;

    try{
    longitud_dominio =  dominio.length();

    if (longitud_dominio > 30 || longitud_dominio < 3){
        throw std::invalid_argument("El dominio tiene o menos de 3 letras o mas de 30");
    }
    // Busca caracteres no permitidos en el dominio
    std::regex caracteres("^[a-zA-Z]+$");

    bool condicion3 = std::regex_match(dominio, caracteres);

    //Condiciones para poder agarrar las excepciones
    if(!condicion3){
        throw std::invalid_argument("El dominio no debe contener ni numeros ni caracteres especiales");
    }
    }catch(const std::exception&e){
        std::cerr << "Error encontrado: " << e.what() << std::endl;
        return;
    }catch(...){
        std::cerr << "Error desconocido" << std::endl;
        valido = true;
    }
    //validacion de extension
    
    try {
        // Esta expresión regular verifica que cada segmento de la extensión tenga entre 2 y 6 letras.
        std::regex patron_extension(R"(^([a-zA-Z]{2,6})(\.[a-zA-Z]{2,6})*$)");

        // Verificar que no contiene números ni caracteres especiales
        std::regex patron_invalido(R"([^a-zA-Z\.])"); 

        if (!std::regex_match(extension, patron_extension)) {
            throw std::runtime_error("La extensión no cumple con el formato requerido.");
        }

        if (std::regex_search(extension, patron_invalido)) {
            throw std::runtime_error("La extensión contiene caracteres inválidos.");
        }

        // Verificar que la longitud de cada segmento sea correcta
        std::istringstream stream(extension);
        std::string segmento;
        while (getline(stream, segmento, '.')) {
            if (segmento.empty()) continue;  // Ignora segmentos vacíos 
            if (segmento.length() < 2 || segmento.length() > 6) {
                throw std::runtime_error("Segmento de extensión '" + segmento + "' no tiene la longitud adecuada (2-6 caracteres).");
            }
        }

    } catch (const std::exception& e) {
        std::cerr << "Error encontrado en la extensión: " << e.what() << std::endl;
        valido = true;  // Asumimos que valido es una variable booleana de control
        return;
    }catch(...){
        std::cerr << "Error desconocido" << std::endl;
        valido = true;
    }


    if(!valido){
        std::cout << "Correo valido!" <<std::endl;
    }

}