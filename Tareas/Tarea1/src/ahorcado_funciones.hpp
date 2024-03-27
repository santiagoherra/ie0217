#ifndef FUNCIONES_AHORCADO
#define FUNCIONES_AHORCADO

#include "ahorcado.hpp"

//elegir dificutad de juego
int dificultad();
//iniciar juego
void iniciarjuego(ahorcado listaPalabras, int palabras_agregadas);
//funcion para reemplazar palabra en el juego
void agregar_palabra(ahorcado listaPalabras[], int palabras_agregadas);
//ver diccionario
void ver_diccionario(ahorcado listaPalabras[],int palabras_agregadas);
//conseguir las letras de las palabra
int conseguir_numero_aleatorio(int min, int max);
//mostrar estado del juego(interfaz)
void mostrar_estado(ahorcado juego);
//encontrar letra
void encontrar_letra(ahorcado juego);
//termino el juego
bool termino_juego(ahorcado juego);

#endif
