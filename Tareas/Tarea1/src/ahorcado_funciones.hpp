/**
 * @file ahorcado_funciones.hpp
 * @author Santiago Herra santiago.herra@ucr.ac.cr
 * @brief Header de las funciones utilizadas en el juego de ahorcado, representan las funciones internas y externas del juego
 * @version 0.1
 * @date 2024-03-31
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef FUNCIONES_AHORCADO
#define FUNCIONES_AHORCADO

#include "ahorcado.hpp"
#include <string>

/**
 * @brief seleccion de intentos que el jugador desea tener, simple switch case
 * 
 * 
 * @return int, devuelve la cantidad de intentos que el jugador desea tener
 */
int dificultad();
/**
 * @brief funcion del juego ahorcado, tiene varias funciones internas para poder agregar la letra, y poder ir adivinando la palabra
 * 
 * @param intentos la cantidad de intentos que tiene la persona para fallar la palabra
 * @param listaPalabras el arreglo de palabras de donde se puede agarrar la palabra para jugar
 * @param palabras_agregadas contador de cantidad de palabras agregadas en listaPalabras[]
 */
void iniciar_juego(int intentos, std::string listaPalabras[], int palabras_agregadas);
/**
 * @brief Agrega palabras a listaPalabras para que el jugador pueda jugar
 * 
 * @param listaPalabras 
 * @param palabras_agregadas 
 */
void agregar_palabra(std::string listaPalabras[], int &palabras_agregadas);
/**
 * @brief Funcion para poder ver las palabras agregandas al juego.
 * 
 * @param listaPalabras 
 * @param palabras_agregadas 
 */
void ver_palabras(const std::string listaPalabras[], int palabras_agregadas);
/**
 * @brief Consigue un numero aleatorio para que la palabra que se escoge sea aleatoria
 * 
 * @param min valor minimo a elegir 
 * @param max valor maximo a elegir
 * @return int valor aleatorio que se eligio.
 */
int conseguir_numero_aleatorio(int min, int max);
/**
 * @brief muestra el estado en que esta la palabra y cuantos intentos le quedan
 * 
 * @param juego es el struct con la informacion del juego actual
 */
void mostrar_estado(ahorcado* juego);
/**
 * @brief encuentra la letra dentro de la palabra y la intercambia dependiendo si acerto
 * 
 * @param juego 
 */
void encontrar_letra(ahorcado* juego);
/**
 * @brief hace un checkeo si el juego ya termino, ademas de dar la opcion si se quedo sin intentos que se pueda ingresar la palabra como ultimo chance
 * 
 * @param juego 
 * @return true si el juego sigue 
 * @return false si se termino el juego
 */
bool termino_juego(ahorcado* juego);


#endif
