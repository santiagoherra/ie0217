#include "planeta.hpp"
#include <iostream>
#include <random>

Pais::Pais(std::string nombre_pais,
           int PIB,
           int cantidad_habitantes,
           int identificador,
           bool aeropuerto,
           bool cinco_G,
           bool centro_investigacion) :
           nombre_pais(nombre_pais),
           PIB(PIB),
           cantidad_habitantes(cantidad_habitantes),
           identificador(identificador),
           aeropuerto(aeropuerto),
           cinco_G(cinco_G),
           centro_investigacion(centro_investigacion) {}

double Pais::calcular_PIB(){
    double min = 0;
    double max = 30000000000;
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_real_distribution<double> dis(min, max); 

    return dis(gen);
}

bool Pais::esPrimo(int identificador) {
    if (identificador <= 1) {
        return false;
    }
    if (identificador <= 3) {
        return true;
    }
    if (identificador % 2 == 0 || identificador % 3 == 0) {
        return false;
    }
    int limite = sqrt(identificador) + 1;
    for (int i = 5; i < limite; i += 6) {
        if (identificador % i == 0 || identificador % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

bool Pais::operator== (const Pais &p){
    return cinco_G == p.cinco_G;
}

double Pais_desarrollo::calcular_personas_trabajo(double cantidad_habitantes){
    double min = 0;
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_real_distribution<double> dis(min, cantidad_habitantes); 

    return dis(gen);
}

double Pais_primer_mundo::calcular_personas_trabajo(double cantidad_habitantes){
    return cantidad_habitantes;
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

Continente::Continente(std::string nombre_continente,
                       int cantidad_paises_primermundo,
                       Pais listaPais_primermundo[],
                       int cantidad_paises_desarrollo,
                       Pais listaPais_desarrollo[]) :
                       nombre_continente(nombre_continente),
                       cantidad_paises_primermundo(cantidad_paises_primermundo),
                       cantidad_paises_desarrollo(cantidad_paises_desarrollo) {
    for (int i = 0; i < cantidad_paises_primermundo; ++i) {
        this->listaPais_primermundo[i] = listaPais_primermundo[i];
    }
    for (int i = 0; i < cantidad_paises_desarrollo; ++i) {
        this->listaPais_desarrollo[i] = listaPais_desarrollo[i];
    }
}


void Continente::imprimir_informacion(const Continente listaContinente[5]){
    for(int i = 0; i < 5; ++i){
        std::cout << listaContinente[i].nombre_continente << "posee "
        << listaContinente[i].cantidad_paises_desarrollo + listaContinente[i].cantidad_paises_primermundo
        << " paises, " << listaContinente[i].cantidad_paises_primermundo << " son de primer mundo y "
        << listaContinente[i].cantidad_paises_desarrollo << "son en desarrollo." << std::endl;
    }
}

Planeta::Planeta(std::string nombre_planeta, Continente listaContinente[5]) :
    nombre_planeta(nombre_planeta) {
    
}

void Planeta::imprimir_informacion() {
    std::cout << "Planeta posee 5 continentes: America, Europa, Africa, Oceanıa y Asia."
    << std::endl;
}

void imprimir_planeta(Planeta planeta1){
    
}



