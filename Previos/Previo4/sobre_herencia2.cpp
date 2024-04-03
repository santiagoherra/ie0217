#include <iostream>
using namespace std;
class Base{ //clase base
    public:
     void print(){
        cout << "Base Function" << endl;
     }
};
class Derived: public Base{ //clase derivada de clase base
    public:
     void print(){
        cout << "Derived Funcion " << endl;
     }
};
int main(){
    Derived derived1, derived2;
    derived1.print();//usa metodo derivado

    //usa metodo de base
    derived2.Base::print(); 
    return 0;
}