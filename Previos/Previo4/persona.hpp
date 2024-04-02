#ifndef PERSONA_H 
#define PERSONA_H 

#include <string>

using namespace std; 

class Persona { //inicializador de la clase
private: 
    string nombre; 
    int edad; 

public: 
    Persona(string nombre, int edad);//constructor
    string getNombre(); 
    int getEdad(); 
    void setEdad(int edad); 
}; 

#endif // PERSONA_H 
