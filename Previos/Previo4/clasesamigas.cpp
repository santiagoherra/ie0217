#include <iostream>
using namespace std;

class MyClass { 
    private://descripcion de clase privada
        int member1;
}

int main() {
    MyClass obj;
    
    // Error! Cannot access private members from here.
    obj.member1 = 5;//sale error porque no se puede ingresar al miembro member1.
}