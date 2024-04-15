#include "funciones_contacto.hpp"
using namespace std;


void agregar_contacto(unordered_map<string, Contacto>* tabla_hash, Contacto*& cabeza) {
    Contacto nuevo_contacto;
    string nuevo_nombre;
    string nuevo_telefono;

    cout << "Nombre del contacto: ";
    getline(cin, nuevo_nombre); // Leer el nombre del contacto

    cout << "Numero de telefono: ";
    getline(cin, nuevo_telefono); // Leer el número de teléfono

    // Crear el nuevo contacto con los datos proporcionados
    nuevo_contacto.nombre = nuevo_nombre;
    nuevo_contacto.telefono = nuevo_telefono;

    // Crear una clave única para el nuevo contacto
    string indice_agregar = nuevo_contacto.nombre + ":" + nuevo_contacto.telefono;

    // Agregar el nuevo contacto a la tabla hash
    (*tabla_hash)[indice_agregar] = nuevo_contacto;
}


void agregar_contacto_telefono(Contacto*& cabeza){//funcion para poder agregar de manera alfabetica
    Contacto* nuevo_contacto = new Contacto;
    cout << "Nombre del contacto: " << endl;
    getline(std::cin,nuevo_contacto -> nombre);

    cout << "Numero de telefono: " << endl;
    getline(cin, nuevo_contacto -> telefono);

    if(!cabeza || nuevo_contacto->nombre < cabeza->nombre){// si no hay un contacto inicial, se pone como primero
    //o si si se compara con el ultimo valor
        nuevo_contacto->siguiente = cabeza;
        cabeza = nuevo_contacto;
    }else{
        Contacto* actual = cabeza;//terminar logica de esto para que funcione, va pasando de nodo para 
        //encontrar uno menor o hasta el ultimo
        while(actual->siguiente &&  actual->siguiente->cabeza.nombre < cabeza->nombre){

           actual = actual->siguiente;

        }

        nuevo_contacto->siguiente = actual->siguiente;
        actual->siguiente = nuevo_contacto;
    }
};


void eliminar_contacto(std::unordered_map<std::string, Contacto >* tabla_hash, Contacto*& cabeza){
    string nombre;
    string telefono;

    cout << "Nombre del contacto a borrar: ";
    getline(cin, nombre); 

    cout << "Numero de telefono del contacto a borrar: ";
    getline(cin, telefono); 

    string indice_borrar = nombre + ":" + telefono;

    // Buscar si la clave existe en la tabla hash
    auto iterador = tabla_hash->find(indice_borrar);//devueve un iterador
    if (iterador->first == indice_borrar){//iterador->first devuelve el indice que le dio find, asi verifica si si existe

        //conectar nodos
        //(iterador->second).siguiente = 

        tabla_hash->erase(iterador);//borra el indice con su valor
        cout << "Contacto borrado exitosamente." << endl;
    } else {
        cout << "El contacto no se encontró en la tabla hash." << endl;
    }


}


void mostrar_contactos_telefono(Contacto*& cabeza){

}

void mostrar_contactos_hashtable(const std::unordered_map<std::string, Contacto > tabla_hash){

}
