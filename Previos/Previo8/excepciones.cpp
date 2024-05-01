#include <iostream>
#include <stdexcept>

//Ejemplo donde si se utilizan excepciones para el denominador usando comando try
using namespace std;
int main(){
    double numerator,denominator, divide;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try{
        if (denominator == 0)
            throw 0;

        divide = numerator / denominator;
        cout << numerator << " / " << denominator << " = " << divide << endl;
    }
    catch (int num_exception){//Sintaxis para agarrar excepcion si falla el try
        cout << "Error: Cannot divide by " << num_exception << endl;
    }
}

