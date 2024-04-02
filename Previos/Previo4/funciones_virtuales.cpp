#include <iostream>
using namespace std;

class Base {
    public:
        virtual void print() { //funcion esperando a ser redefinida
            cout << "Base Function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {//redefinicion de la funcion void
            cout << "Derived Function" << endl;
        }
};

int main() {
    Derived derived1;

    Base* base1 = &derived1;

    //utilizando la funcion redefinida.
    base1->print();
    return 0;
}
