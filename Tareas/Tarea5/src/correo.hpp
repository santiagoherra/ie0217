/**
 * @file correo.hpp
 * @author Santiago Herra
 * @brief Este es el header de la clase ValidarEmail la cual tiene como proposito validar una direccion electronica
 * @version 0.1
 * @date 2024-05-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef CORREO_HPP
#define CORREO_HPP

#include <string>
#include <iostream>

/**
 * @brief 
 * @param correo Es el atributo donde se almacena el correo total
 * @param nombre Es el atributo donde se almacena el nombre
 * @param dominio Es el atributo donde se almacena el dominio
 * @param extension Es el atributo donde se almacena la extension
 */
class ValidarEmail{
    private: //Estos son los atributos que conforma la clase
        std::string correo;
        std::string nombre;
        std::string dominio;
        std::string extension;

    public:
        void conseguirCorreo();///Esta es la funcion que consigue el correo del usuario
        void validarCorreo();///Esta es la funcion que divide el correo y se lo atribuye a todos los atributos

};

#endif