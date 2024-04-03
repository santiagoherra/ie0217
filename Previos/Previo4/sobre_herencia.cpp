#include <iostream>
using namespace std;
class Base{ //clase base
    public:
     void print(){
        cout << "Base Function" << endl;
     }
};
class Derived: public Base{ //clase derivada de la clase base
    public:
     void print(){
        cout << "Derived Funcion " << endl;
     }
};
int main(){
    Derived derived1; 
    derived1.print();//derivada de la funcion print, ganando la derivada
    return 0;
}