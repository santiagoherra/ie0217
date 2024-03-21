#include "Funciones.hpp"

void agregarContactos(Contacto listaContactos[], int &numContactos){
    Contacto nuevoContacto;
    std::cout << "Ingrese el nombre del contacto: ";
    std::cin >> nuevoContacto.nombre;
    std::cout << "Ingrese el numero de telefono: ";
    std::cin >> nuevoContacto.telefono;

    listaContactos[numContactos++] = nuevoContacto; //se le agrega un 1 en numContactos porque comenzamos en 0 el contador de contactos,
    //asi el siguiente va a ser el contacto 2 y asi sigue

}

void mostrarContactos(const Contacto listaContactos[], int numContactos){
    std::cout << "Lista de contactos: \n";
    for (int i = 0; i < numContactos; ++i){// funcion para mostrar contactos en el struct
        std::cout << "Nombre: " << listaContactos[i].nombre << ", Telefono: " << listaContactos[i].telefono << "\n";
    }
}

void buscarContactos(const Contacto listaContacto[], int numContactos){
    std::string nombreBusqueda;//declara la variable string
    std::cout << "Ingrese el nombre a buscar: ";
    std::cin >> nombreBusqueda;
    bool encontrado = false;
    for (int i = 0; i < numContactos; i++){
        if(listaContacto[i].nombre == nombreBusqueda){
            std::cout << "Nombre: " << listaContacto[i].nombre << ", Telefono: " << listaContacto[i].telefono << "\n";
            encontrado = true;
            break;
        }
    }
    if (!encontrado){
        std::cout << "Contacto no encontrado.\n"; //optimizacion para el encontrado
    }
}