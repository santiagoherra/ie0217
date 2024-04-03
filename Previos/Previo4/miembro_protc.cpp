#include <iostream>
#include <string>
using namespace std;

class Animal{ //clase animal, con miebros de diferentes tipos
    private: 
     string color;

    protected: 
     string type;

    public: 
     void run () {cout << "I can run -- Base!" << endl;}
     void eat () {cout << "I can eat -- Base!" << endl;}
     void sleep () {cout << "I can sleep -- Base!" << endl;}
     void setColor(string clr) {color = clr;}
     string getColor(){return color;}
};


class Dog : public Animal{ //clase perro con herencia de animal
    public:
     void run () {cout << "I can run -- Derived!" << endl;}
     void setType(string tp){type = tp;}
     void displayInfo(string c){
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
     }

     void bark() {cout << "I can bark" << endl;}
};
int main(){
    Dog dog1;
    dog1.run();//print de clase derivada
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());//ejempos de atributos utilizados por la herencia.

    return 0;
}