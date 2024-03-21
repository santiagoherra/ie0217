#include <iostream>
using namespace std;

int main() {
    float arr[3]; // declaracion de un arreglo de 3 elementos de tipo float
    float *ptr; 

    cout << "Displaying address using arrays: " << endl;

    // utilizando bucle para poder imprimir el arreglo
    for (int i = 0; i < 3; i++) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    ptr = arr;

    cout << "\nDisplaying address using pointers: " << endl;

    //comparando metodos para ingresar a arregos e imprimir

    for (int i = 0; i < 3; i++) {
        cout << "ptr + " << i << ": " << ptr + i << endl;
    }

    return 0;
}
