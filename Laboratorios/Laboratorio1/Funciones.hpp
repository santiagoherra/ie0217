#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "Contacto.hpp"

void agregarContactos(Contacto listaContactos[], int &numContactos);// & para que se pueda modificar el valor original
void mostrarContactos(const Contacto listaContactos[], int numContactos);//const es para que sea un constante 
void buscarContactos(const Contacto listaContactos[], int numContactos);
//en listaContacto no se ocupa un & porque no se ocupa en listas

#endif