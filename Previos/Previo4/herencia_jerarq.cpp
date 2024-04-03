#include <iostream>
using namespace std;

class Animal{ //clase animal
    public:
     void info(){cout << " Soy un animal" << endl;}
};

class Dog: public Animal{ //clase perro con herencia
    public:
     void bark(){cout << "Soy un perro " << endl;}
};

class Cat: public Animal{ //clase gato con herencia
    public:
     void meow(){cout << "Soy un gato " << endl;}
};

int main(){ 
    Dog dog1;
    cout << "Clase perro" << endl;//uso de jerarquia en metodos.
    dog1.info();
    dog1.bark();

    Cat cat1;
    cout << "Clase gato"<< endl;//uso de jerarquia en metodos.
    cat1.info();
    cat1.meow();
    return 0;

}