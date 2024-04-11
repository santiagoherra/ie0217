#include "principal.hpp"
#include <iostream>
#include <string>

using namespace std;

void agregarLibro(Libro*& lista){
    Libro* nuevoLibro = new Libro;//genera la memoria dinamica

    cout << "Ingrese el titulo del libro: "<< endl;
    cin.ignore();//se hace para poder recibir la linea de manera correcta
    getline(cin, nuevoLibro -> titulo);//abarca todo lo que el usuario escribe 

    cout << "Ingrese el autor del libro: "<< endl;
    getline(cin, nuevoLibro -> autor);

    cout << "Ingrese el genero del libro: "<< endl;
    getline(cin, nuevoLibro -> genero);

    nuevoLibro->siguiente = lista;

    lista = nuevoLibro;

    cout << "Libro aregado correctamente."<< endl;
}

void mostrarLibro(Libro* lista){
    if(lista == nullptr){
        cout << "La libreria no tiene libros. " << endl;
        return;
    }

    cout << "Lista de libros: " << endl;
    while(lista != nullptr){//muestra los libros de manera de listas enlazadas
        cout << "Titulo: " << lista->titulo << endl;
        cout << "Autor: " << lista->autor << endl;
        cout << "Genero: " << lista->genero << endl;

        lista = lista->siguiente;
    }
}

void liberarMemoria(Libro*& lista){//libera la memoria dinamica.
    while(lista != nullptr){
        Libro* temp  = lista;
        lista = lista->siguiente;
        delete temp;
    }
}
