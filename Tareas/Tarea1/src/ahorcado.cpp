#include "ahorcado_funciones.hpp"
#include <random>
#include <string>
using namespace std;

int dificultad(int decision){

    cout << "Escogengiendo dificultad:\n 1) Facil (7 intentos)\n 2) Media (5 intentos)\n 3) Dificil (3 intentos)" << endl;
    cout << "Si no se escoge opcion se pondra en dificultad facil" << endl;

    enum dificultad{
        facil = 1,
        media,
        dificil
    };

int intentos;

    switch (decision)
    {
    case facil:
        intentos = 7;
        break;

    case media:
        intentos = 5;
        break;
    
    case dificil:
        intentos = 3;
        break;

    default:
        intentos = 7;
        break;
    }    
    
    return intentos;
};

void mostrar_estado(const ahorcado juego){
    cout << "Palabra a adivinar = " << juego.palabraAdivinada << endl;
    cout << "Intentos restantes = " << juego.intentos_max - juego.intentos_realizados << endl;
};


void iniciarjuego(int intentos, string listaPalabras[], int palabras_agregadas){
    //consiguiendo la palabra para poder jugar
    int numero_aleatorio = conseguir_numero_aleatorio(0,palabras_agregadas);

    ahorcado juego;

    juego.intentos_max = intentos;

    juego.palabra = listaPalabras[numero_aleatorio];

    int tamanno_palabra = juego.palabra.length();

    juego.palabraAdivinada = string(tamanno_palabra,'_');

    //palabra a jugar ya conseguida en un array

    char letra_elegida;

    do{
        //imprimiendo interfaz de juego:
        cout << "Numero de intentos = " << juego.intentos_max - juego.intentos_realizados << endl;

        for(int i = 0; i < tamanno_palabra ; ++i){
            cout << "_ " << endl;
        };
        
        //logica de intercambir palabra.

        cout << "Ingrese una letra " << endl;
        cin >> letra_elegida;

        //funcion reemplazar letra

        for(int i = 0; i < tamanno_palabra; ++i){
            if(letra_elegida == array_letras[i]){

            }
        };





        
    }
    while(juego.intentos_realizados != juego.intentos_max);
    

};