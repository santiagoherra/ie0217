#include "correo.hpp"

ValidarEmail::ValidarEmail(){
    std::string correo;
    std::cout << "Ingresa el correo que deseas validar" << std::endl;
    std::cin.getline(correo);
    
}

void ValidarEmail::validarCorreo(){

    size_t atPos = correo.find('@');  // Encuentra la posición del '@'
    nombre = correo.substr(0, atPos);  // Extrae el nombre

    // Encuentra el último punto después del '@' para separar dominio y extensión
    size_t dotPos = correo.find_last_of('.');
    dominio = correo.substr(atPos + 1, dotPos - atPos - 1);
    extension = correo.substr(dotPos + 1);
}

