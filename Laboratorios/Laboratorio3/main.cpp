#include "principal.hpp"
#include <iostream>

using namespace std;

enum opciones{
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBRO,
    SALIR,
    OPCIONES_MAX
};


int main(){
    Libro* listaLibros = nullptr;
    int opcion;

    do{
        cout << "Selecione su opcion: " << endl;
        cout << "1) Agregar su libro" << endl;
        cout << "2) Mostrar todos los libros " << endl;
        cout << "3) Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case AGREGAR_LIBRO:
            agregarLibro(listaLibros);
            break;
        
        case MOSTRAR_LIBRO:
            mostrarLibro(listaLibros);
            break;
        
        case SALIR:
            cout << "Saliendo del programa. " << endl;
            break;

        default:
            cout << "Opcion no permitida." << endl;
            break;
        }
    }while (opcion != SALIR);
    

}