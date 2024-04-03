#include <iostream>
using namespace std;
class Animal{ //clase animal
    public:
     void eat(){
        cout << "I can eat!" << endl;
     }
     void sleep() {
        cout << " I can sleep" << endl;
     }
};

class Dog : public Animal{ //herencia de clase animal a clase perro
    public:
     void bark(){
        cout << "I can bark: woof woof!!" << endl;
     }
};

int main(){
    Dog dog1;
    
    dog1.eat();//ejemplo de la implementacion de los metodos gracias a la herencia.

    dog1.sleep();
    
    dog1.bark();

    return 0;

}