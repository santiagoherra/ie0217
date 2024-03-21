#include <iostream>
using namespace std;

// ejemplo de funciones swap para cambiar valores de variables con punteros
void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    // iniializo variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // hago el swap
    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    //imprimo resultados
    return 0;
}
