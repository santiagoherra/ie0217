#include <iostream>
#include <stdexcept>

using namespace std;

//Codigo donde no se utilizan excepciones para el denominador
int main() {
    int numerador, denominador, resultado;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    resultado = numerador / denominador;
    cout << "El resultado es: " << resultado << endl;

    return 0;
}
