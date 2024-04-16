#include "funciones_contacto.hpp"
#include <iostream>
using namespace std;


void agregar_contacto(unordered_map<string, Contacto>* tabla_hash, Contacto*& cabeza, Contacto* nuevo_contacto_ptr, int* ptr_cantidad){
    Contacto nuevo_contacto; //contacto que va en la tabla hash y dentro del malloc

    //contacto que va en el telefono

    string nuevo_nombre;
    string nuevo_telefono;

    cout << "Nombre del contacto: ";
    cin.ignore();
    getline(cin, nuevo_nombre); // Leer el nombre del contacto

    cout << "Numero de telefono: ";
    getline(cin, nuevo_telefono); // Leer el número de teléfono


    // Crear el nuevo contacto con los datos proporcionados
    nuevo_contacto.nombre = nuevo_nombre;
    nuevo_contacto.telefono = nuevo_telefono;

    //Agregar en el bloque que hizo el malloc:
    nuevo_contacto_ptr[*ptr_cantidad] = nuevo_contacto;

    *ptr_cantidad+=1;

    // Crear una clave única] para el nuevo contacto
    string indice_agregar = nuevo_contacto.nombre + ":" + nuevo_contacto.telefono;

    //Enlazar la lista:
    nuevo_contacto.siguiente = cabeza;
    cabeza = &nuevo_contacto;


    // Agregar el nuevo contacto a la tabla hash
    (*tabla_hash)[indice_agregar] = nuevo_contacto;

}


void eliminar_contacto(std::unordered_map<std::string, Contacto >* tabla_hash, Contacto*& cabeza, Contacto* nuevo_contacto_ptr, int* ptr_cantidad){
    string nombre_borrar;
    string telefono_borrar;
    bool existe; //para saber si el contacto si existe.

    cout << "Nombre del contacto a borrar: ";
    cin.ignore();
    getline(cin, nombre_borrar); 

    cout << "Numero de telefono del contacto a borrar: ";
    getline(cin, telefono_borrar); 

    for(int i = 0; i < *ptr_cantidad; i++){
        if(nuevo_contacto_ptr[i].nombre == nombre_borrar){
            free(&nuevo_contacto_ptr[i]);
            existe = true;
        }
        else{
            cout << "No se pudo encontrar el contacto deseado" << endl;
            existe = false;
        }
    }


    int opcion;

    cout << "\nDeseas borrar el contacto el contacto del cloud?\n1)Si \n2) No\n" << endl;
    cin >> opcion;

    if(opcion == 1 && existe == true){

    string indice_borrar = nombre_borrar + ":" + telefono_borrar;

    // Buscar si la clave existe en la tabla hash
    auto iterador = tabla_hash->find(indice_borrar);//devueve un iterador

    //conectar nodos
    (iterador->second).siguiente = cabeza;

    //borrar de la tabla hash
    tabla_hash->erase(iterador);//borra el indice con su valor
    cout << "Contacto borrado exitosamente." << endl;

    }
    
}


void mostrar_contactos_hashtable(std::unordered_map<std::string, Contacto>* tabla_hash) {
    cout << "LLave     Nombre      Telefono" << endl; 
    for (auto& par : *tabla_hash) { // Desreferencia el puntero para acceder al mapa
        cout << par.first << "\t" << par.second.nombre << "\t" << par.second.telefono << endl;
    }   
}


void mostrar_contactos_telefono(Contacto* nuevo_contacto_ptr, int* ptr_cantidad){
    Contacto lista_ordenada[*ptr_cantidad];
    int contador = 0;

    //lista sin ordenar
    for(int i = 0; i < *ptr_cantidad; i++){
        cout << nuevo_contacto_ptr[i].nombre << ":" << nuevo_contacto_ptr[i].telefono << endl;
    }

}
