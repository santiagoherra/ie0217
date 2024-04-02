#include "persona.hpp" 
using namespace std; 

Persona::Persona(string nombre, int edad) { 
    this->nombre = nombre; //agregando los atributos, con el puntero this
    this->edad = edad; 
}

string Persona::getNombre() { 
    return nombre; //funciones de Persona
}

int Persona::getEdad() { 
    return edad; 
}

void Persona::setEdad(int edad) { 
    this->edad = edad; 
}
