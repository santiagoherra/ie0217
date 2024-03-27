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

void mostrar_estado(ahorcado juego){
    cout << "Palabra a adivinar = " << juego.palabraAdivinada << endl;
    cout << "Intentos restantes = " << juego.intentos_max - juego.intentos_realizados << endl;
};


void encontrar_letra(ahorcado juego){
    char letra;
    cout << "Ingrese una letra " << endl;
    cin >> letra;

    bool acierto = false;
    for(int i = 0; i < juego.palabra.length(); ++i){
        if(juego.palabra[i] == letra){
            juego.palabraAdivinada[i] = letra;
            acierto = true;
        }
    }

    if(acierto == false){
        cout << "letra incorrecta = " << endl;
        juego.intentos_realizados++;
    }
};

bool termino_juego(ahorcado juego){

};

int conseguir_numero_aleatorio(int min, int max){

};

void iniciarjuego(int intentos, string listaPalabras[], int palabras_agregadas){
    //consiguiendo la palabra para poder jugar
    int numero_aleatorio = conseguir_numero_aleatorio(0,palabras_agregadas);

    ahorcado juego;

    juego.intentos_max = intentos;

    juego.palabra = listaPalabras[numero_aleatorio];

    juego.palabraAdivinada = string(juego.palabra.length(),'_');

    //palabra a jugar ya conseguida en un array

    do{
        //imprimiendo interfaz de juego:
        mostrar_estado(juego);
        
        //encontrar la letra adivinada
        encontrar_letra(juego);

        //verificar si termino juego





        
    }
    while(juego.intentos_realizados != juego.intentos_max);
    

};