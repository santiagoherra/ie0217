/**
 * @file funciones_contacto.cpp
 * @author Santiago Herra santiago.herra@ucr.ac.cr
 * @brief La definicion de las funciones utilizadas en el main.
 * @version 0.1
 * @date 2024-04-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "funciones_contacto.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;


void agregar_contacto(unordered_map<string, Contacto>* tabla_hash, Contacto*& cabeza, Contacto* nuevo_contacto_ptr, int* ptr_cantidad){
    Contacto nuevo_contacto; ///Contacto que va en la tabla hash y dentro del malloc

    ///Contacto que va en el telefono

    string nuevo_nombre;
    string nuevo_telefono;

    cout << "Nombre del contacto: ";
    cin.ignore();
    getline(cin, nuevo_nombre); /// Leer el nombre del contacto

    cout << "Numero de telefono: ";
    getline(cin, nuevo_telefono); /// Leer el número de teléfono


    /// Crear el nuevo contacto con los datos proporcionados
    nuevo_contacto.nombre = nuevo_nombre;
    nuevo_contacto.telefono = nuevo_telefono;

    ///Agregar en el bloque que hizo el malloc:

    nuevo_contacto_ptr[*ptr_cantidad] = nuevo_contacto;

    *ptr_cantidad+=1;

    /// Crear una clave única] para el nuevo contacto
    string indice_agregar = nuevo_contacto.nombre;

    /// Enlazar la lista:
    nuevo_contacto.siguiente = cabeza;
    cabeza = &nuevo_contacto;


    /// Agregar el nuevo contacto a la tabla hash
    (*tabla_hash)[indice_agregar] = nuevo_contacto;

}


void eliminar_contacto(std::unordered_map<std::string, Contacto>* tabla_hash, Contacto*& cabeza, Contacto*& nuevo_contacto_ptr, int* ptr_cantidad) {
    string nombre_borrar;
    bool agrega_solo_uno;

    cout << "Nombre del contacto a borrar: ";
    cin.ignore();
    getline(cin, nombre_borrar); 

    bool encontrado = false;
    for (int i = 0; i < *ptr_cantidad; i++) {
        if (nuevo_contacto_ptr[i].nombre == nombre_borrar) {
            /// Se encontro el contacto, eliminarlo
            cout << "Se ha eliminado el contacto \nNombre: " << nuevo_contacto_ptr[i].nombre <<
            "\nTelefono: " << nuevo_contacto_ptr[i].telefono << endl;

            /// Arreglo para error si solo se agrega un contacto.
            if(*ptr_cantidad == 1){
                *ptr_cantidad += 1;
                agrega_solo_uno = true;
            }


            /// Mover el ultimo elemento al lugar del que se quiere eliminar
            nuevo_contacto_ptr[i] = nuevo_contacto_ptr[*ptr_cantidad - 1];

            /// Redimensionar el array para eliminar el último elemento
            Contacto* temp = (Contacto*)realloc(nuevo_contacto_ptr, (*ptr_cantidad - 1) * sizeof(Contacto));
            if (temp != nullptr) {
                nuevo_contacto_ptr = temp;
                /// Decrementar el valor de ptr_cantidad después de la eliminación
                *ptr_cantidad -= 1;
            } else {
                /// Error al redimensionar, manejar el error según sea necesario
                cout << "Error al redimensionar el array." << endl;
                return;
            }

            /// Para solucionar error cuando hay un solo contacto.
            if(agrega_solo_uno){
                *ptr_cantidad -= 1;
            }


            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "Contacto eliminado exitosamente." << endl;
    } else {
        cout << "No se pudo encontrar el contacto deseado" << endl;
    }


    /// Eliminacion del contacto en el hashtable

    int opcion;

    if(encontrado == true){

        cout << "\nDeseas borrar el contacto el contacto del cloud?\n1)Si \n2) No\n" << endl;
        cin >> opcion;
        if (opcion == 1){

        /// Buscar si la clave existe en la tabla hash
            auto iterador = tabla_hash->find(nombre_borrar);//devueve un iterador

            /// Conectar nodos
            (iterador->second).siguiente = cabeza;

            /// Borrar de la tabla hash
            tabla_hash->erase(iterador);//borra el indice con su valor
            cout << "Contacto borrado exitosamente." << endl;
        }
    }
    
}


void mostrar_contactos_hashtable(std::unordered_map<std::string, Contacto>* tabla_hash) {
    if(tabla_hash->size() == 0){
        cout << "No hay contactos en la memoria cloud" << endl;
    }
    else{
        cout << "Contactos en el cloud: " << endl;
        cout << "Nombre : Telefono" << endl; 
        for (auto& par : *tabla_hash) { /// Desreferencia el puntero para acceder al mapa
            cout << par.second.nombre << " : " << par.second.telefono << endl;
        }   
    }
}


void mostrar_contactos_telefono(Contacto* nuevo_contacto_ptr, int* ptr_cantidad){
    ///Lista ordenada para imprimir
    Contacto lista_ordenada[*ptr_cantidad];

    if(*ptr_cantidad == 0){
        cout << "La memoria de contactos esta vacia" << endl;
    }
    else{
    ///Lista sin ordenar
    cout << "Contactos en el telefono: " << endl;
    cout << "Nombre : Telefono" << endl;

    for(int i = 0; i < *ptr_cantidad; i++){
        
        ///Para imprimir los valores
        cout << nuevo_contacto_ptr[i].nombre << " : " << nuevo_contacto_ptr[i].telefono << endl;
    }

    }

}
