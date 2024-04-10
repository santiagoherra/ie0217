#include "planeta.hpp"
#include <iostream>
#include <random>

Pais::Pais(std::string nombre_pais,
           int PIB,
           int cantidad_habitantes,
           int identificador,
           bool aeropuerto,
           bool cinco_g,
           bool centro_investigacion) :
           nombre_pais(nombre_pais),
           PIB(PIB),
           cantidad_habitantes(cantidad_habitantes),
           identificador(identificador),
           aeropuerto(aeropuerto),
           cinco_G(cinco_g),
           centro_investigacion(centro_investigacion) {}

double Pais::calcular_PIB(){
    double min = 0;
    double max = 30000000000;
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_real_distribution<double> dis(min, max); 

    return dis(gen);
}

bool Pais::esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero <= 3) {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
    int limite = sqrt(numero) + 1;
    for (int i = 5; i < limite; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

Pais Pais::operator== (const Pais &p){
    Pais booleano(
        
    );
}


void Pais::imprimir_informacion(){
    
    std::cout << nombre_pais << "identificador: " << identificador << "es un pais con "
     << cantidad_habitantes << "habitantes. Posee un PIB de " << PIB << "$. " << std::endl;

    if(esPrimo(identificador)){
        std::cout << nombre_pais << " no contiene aeropuertos, ni tecnologia 5G ni centros de investigacion" << std::endl;
    }
    else{
        std::cout << nombre_pais << " contiene aeropuertos, tecnologia 5G y centros de investigacion" << std::endl;
    }
}


