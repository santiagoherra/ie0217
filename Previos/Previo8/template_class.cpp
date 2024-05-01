// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

// Class template
template <class T>
class Number {
    private:
        //variable tipo Template num
        T num;

    public:
        Number(T n) : num(n) {} //Constructor de la clase

        T getNum() {//Metodo de template
            return num;
        }
};

int main() {

    // Creando objeot de tipo template
    Number<int> numberInt(7);

    // Creando objeto pero de tipo double, con metodos de template
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}