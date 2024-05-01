#include <iostream>
using namespace std;

//Usando template de tipo clase (char)
template <class T, class U, class V = char>
class ClassTemplate{
    private:
     T var1;
     U var2;
     V var3;
    
    public:
     ClassTemplate(T v1, U v2, V v3): var1(v1), var2(v2), var3(v3){}//Constructor de la clase template

     void printVar(){
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
     }
};

int main(){
    //Generando los objetos
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    //usando el metodo print
    obj1.printVar();

    //Creando diferentes tipo de objeto, de igual manera funciona por el template.
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;

}