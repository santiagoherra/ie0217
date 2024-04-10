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


void Continente::imprimir_informacion(){
        std::cout << nombre_continente << ", posee " << cantidad_paises_desarrollo + cantidad_paises_primermundo
        << ", " << cantidad_paises_primermundo << " son de primer mundo y " <<
        cantidad_paises_desarrollo << " son en desarrollo." << std::endl;
}

Planeta::Planeta(std::string nombre_planeta, Continente listaContinente[5]) :
    nombre_planeta(nombre_planeta) {
    //definir continentes
}

void Planeta::imprimir_informacion() {
    std::cout << "Planeta posee 5 continentes: America, Europa, Africa, Oceania y Asia."
    << std::endl;
}

void imprimir_planeta(Planeta planeta1) {
    //imprimir informacio sobre cada continente
    planeta1.imprimir_informacion();


    for (int i = 0; i < 5; ++i) {
        Continente& continente = planeta1.listaContinente[i];

        
        continente.imprimir_informacion();

        //imprimir informacion sobre cada pais
        for (int j = 0; j < continente.cantidad_paises_primermundo; ++j) {
            Pais& pais = continente.listaPais_primermundo[j];
            pais.imprimir_informacion();
        }
        for (int j = 0; j < continente.cantidad_paises_desarrollo; ++j) {
            Pais& pais = continente.listaPais_desarrollo[j];
            pais.imprimir_informacion();
        }
    }
}

void agregar_pais(Planeta planeta1){
    Pais pais_nuevo;
    std::cout <<  "Nombre del planeta :" << std::endl;
    std::cin >> pais_nuevo.nombre_pais;

    std::cout << "Identificador del pais :" << std::endl;
    std::cin >> pais_nuevo.identificador;

    std::cout << "Cantidad de habitantes : " << std::endl;
    std::cin >> pais_nuevo.cantidad_habitantes;
    
    int continente_elegir;

    std::cout << " \n A que continente pertenece este pais?\n";
    std::cout << "1) America\n";
    std::cout << "2) Europa\n";
    std::cout << "3) Africa\n";
    std::cout << "4) Oceania\n";
    std::cout << "5) Asia\n";
    std::cin >> continente_elegir;

    continente_elegir--;///disminuyendo un valor para encontrar el indice

    //agregando los atributos restante al objeto pais
    pais_nuevo.PIB = pais_nuevo.calcular_PIB();

    bool booleano = pais_nuevo.esPrimo(pais_nuevo.identificador);

    pais_nuevo.aeropuerto = booleano;
    pais_nuevo.cinco_G = booleano;
    pais_nuevo.centro_investigacion = booleano;

    //agregando el pais al continente que es

    Continente& continente = planeta1.listaContinente[continente_elegir];

    if(booleano){
        continente.cantidad_paises_desarrollo++;
        continente.listaPais_desarrollo[continente.cantidad_paises_desarrollo] = pais_nuevo;
    }
    continente.cantidad_paises_primermundo++;
    continente.listaPais_primermundo[continente.cantidad_paises_primermundo] = pais_nuevo;

}

void eliminar_pais(Planeta& planeta1) {
    std::string nombre_pais_eliminar;
    int continente_eliminar;

    std::cout << " \n A que continente pertenece este pais?\n";
    std::cout << "1) America\n";
    std::cout << "2) Europa\n";
    std::cout << "3) Africa\n";
    std::cout << "4) Oceania\n";
    std::cout << "5) Asia\n";
    std::cin >> continente_eliminar;

    continente_eliminar--;

    bool eliminado;

    for (int j = 0; j < planeta1.listaContinente[continente_eliminar].cantidad_paises_primermundo; ++j) {
        if (planeta1.listaContinente[continente_eliminar].listaPais_primermundo[j].nombre_pais == nombre_pais_eliminar) {
            //falta logica para eliminar pais
            planeta1.listaContinente[continente_eliminar].cantidad_paises_primermundo--;
            std::cout << "El país '" << nombre_pais_eliminar << "' ha sido eliminado del continente '" << continente_eliminar << "'." << std::endl;
            eliminado = true;
        }
    }

    if(!eliminado){
        for (int j = 0; j < planeta1.listaContinente[continente_eliminar].cantidad_paises_desarrollo; ++j) {
        if (planeta1.listaContinente[continente_eliminar].listaPais_desarrollo[j].nombre_pais == nombre_pais_eliminar) {
            //falta logica para eliminar pais
            planeta1.listaContinente[continente_eliminar].cantidad_paises_desarrollo--;
            std::cout << "El país '" << nombre_pais_eliminar << "' ha sido eliminado del continente '" << continente_eliminar << "'." << std::endl;
            eliminado = true;
            }
        }
    }

    if(!eliminado){
        std::cout << "No se encontro un pais a eliminar." << std::endl;
    }

}


