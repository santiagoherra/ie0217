#include <iostream> 
#include "persona.hpp" 

using namespace std; //tomar en cuenta personas.cpp y personas.hpp

int main() { 
    Persona p("Juan", 25);//usando los atributos como parametros.

    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl; 

    p.setEdad(26); 

    cout << "Nueva edad: " << p.getEdad() << endl; 
    return 0; 
}
