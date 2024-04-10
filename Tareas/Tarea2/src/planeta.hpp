#ifndef PLANETA_HPP
#define PLANETA_HPP

#include <iostream>

class Pais{///esta es la clase que donde se heredan los tipos de paises
    public:
        Pais(std::string Pais,
             int PIB,
             int cantidad_habitantes,
             int identificador,
             bool aeropuerto,
             bool cinco_g,
             bool centro_investigacion);
             
        double calcular_PIB();
        void imprimir_informacion();

    protected:
        std::string nombre_pais;
        int PIB;
        int cantidad_habitantes;
        int identificador;
        bool aeropuerto;
        bool cinco_G;
        bool centro_investigacion;

    private:
        int virtual calcular_personas_trabajo(int cantidad_habitantes);
        bool esPrimo(int identificador);
        Pais operator== (const Pais &p);
};

class Pais_desarrollo : public Pais{///Esta es la clase de Pais desarrollo que hereda de Pais
    //redefinir las propiedades protegidas
    int calcular_personas_trabajo(int cantidad_habitantes) override;
};

class Pais_primer_mundo : public Pais{///Esta es la clase de Pais primer mundo que hereda de Pais
    //redefinir las propiedadas redefinidas
    int calcular_personas_trabajo(int cantidad_habitantes) override;
};

class Continente{///Esta es la clase continente que contiene los paises
    public:
        std::string nombre_continente;

        int cantidad_paises_primermundo;
        Pais listaPais_primermundo[50];//arreglar

        int cantidad_paises_desarrollo;
        Pais listaPais_desarrollo[50];//arreglar
        
        void imprimir_informacion(int cantidad_paises, Pais listaPais[]);
        void imprimir_paises(int cantidad_paises, Pais listaPaises[]);
};

class Planeta{///Esta es la clase planeta que contiene los contienentes y paises
    public:
        Continente America, Europa, Africa, Asia, Oceania;
        std:: string nombre_planeta;
        Continente listaContinente[5] = {America,
                                         Europa,
                                         Africa,
                                         Asia,
                                         Oceania
                                         };

        void imprimir_informacion(Continente listaContinente[5]);

};
/// @brief Funcion que imprime toda la informacion de planeta
/// @param planeta1 Se pasa por parametro el planeta que se quiere imprimir
void imprimir_planeta(Planeta planeta1);
/// @brief Agrega paises con toda la informacion necesaria de cada pais y contieen
/// @param listaPais Se pasa por parametro el pais que se quier agregar
void agregar_pais(Pais listaPais[]);
/// @brief Elimina paises ya creados
/// @param listaPais lista para agregar el pais
void eliminar_pais(Pais listaPais[]);

#endif