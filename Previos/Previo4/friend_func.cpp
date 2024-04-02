#include <iostream>
using namespace std;
class ClassB;

class ClassA {
    public:
    // constructor de la clase A, nueva sintaxis.
        ClassA(): numA (12) {}
    private:
        int numA;
        //declaracion de clase amiga tipo int add
        friend int add (ClassA, ClassB);
};

class ClassB {
    public:
        //inicializacion de la clase A 
        ClassB(): numB (1) {}
    private:
        int numB;
        //declaracion de clase amiga 
        friend int add (ClassA, ClassB);
};



int add(ClassA objectA, ClassB objectB) { //ahora se declara la funcion add, no importa el orden porque ya de declararon las 
//dependencias de las clases amigas y se puede acceder  a la funcion.
    return (objectA.numA + objectB.numB);
}


int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB); //no tira error.
    return 0;
}