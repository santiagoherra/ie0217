#include <iostream>
using namespace std;

class A{ //definiendo clase
    public:
     void display(){
        cout << "Base class content." << endl;
     }
};

class B : public A{}; //herencia multi nivel de clases, no tienen que ser definidas

class C: public B{}; 

int main(){
    C obj;
    obj.display();
    return 0;
}
