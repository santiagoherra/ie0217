#ifndef CORREO_HPP
#define CORREO_HPP

#include <string>
#include <iostream>

class ValidarEmail{
    private:
        std::string correo;
        std::string nombre;
        std::string dominio;
        std::string extension;

    public:
        ValidarEmail();
        void validarCorreo();

};

#endif