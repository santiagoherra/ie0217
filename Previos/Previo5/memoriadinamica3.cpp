#include <iostream>
using namespace std;

class Student{//definiendo la clase estudiante
    private:
     int age;

    public:
     Student() : age(12){}

     void getAge(){
        cout << "Age = " << age << endl;
     }
};
int main(){
    Student* ptr = new Student();
    //Creando objeto dinamico

    ptr->getAge();
    
    delete ptr;
    
    return 0;
}