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
    string indice_agregar = nuevo_contacto.nombre;

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

    for(int i = 0; i < *ptr_cantidad; i++){
        if(nuevo_contacto_ptr[i].nombre == nombre_borrar){

            //print
            cout << "Se ha eliminado el contacto \nNombre: " << nuevo_contacto_ptr[i].nombre <<
            "\nTelefono: " << nuevo_contacto_ptr[i].telefono << endl;

            //se libera la memoria    
            free(&nuevo_contacto_ptr[i]);
            //se resta la cantidad de contactos 
            *ptr_cantidad-=1;
            //condicion
            existe = true;

        }
        else{
            cout << "No se pudo encontrar el contacto deseado" << endl;
            existe = false;
        }
    }


    int opcion;

    if(existe == true){

        cout << "\nDeseas borrar el contacto el contacto del cloud?\n1)Si \n2) No\n" << endl;
        cin >> opcion;
        if (opcion == 1){

        // Buscar si la clave existe en la tabla hash
            auto iterador = tabla_hash->find(nombre_borrar);//devueve un iterador

            //conectar nodos
            (iterador->second).siguiente = cabeza;

            //borrar de la tabla hash
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
        for (auto& par : *tabla_hash) { // Desreferencia el puntero para acceder al mapa
            cout << par.second.nombre << " : " << par.second.telefono << endl;
        }   
    }
}


void mostrar_contactos_telefono(Contacto* nuevo_contacto_ptr, int* ptr_cantidad){

    if(*ptr_cantidad == 0){
        cout << "La memoria de contactos esta vacia" << endl;
    }
    else{
    //lista sin ordenar
    cout << "Contactos en el telefono: " << endl;
    cout << "Nombre : Telefono" << endl;

    for(int i = 0; i < *ptr_cantidad; i++){
        cout << nuevo_contacto_ptr[i].nombre << " : " << nuevo_contacto_ptr[i].telefono << endl;
    }

    }

}
