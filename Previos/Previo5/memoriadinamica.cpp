#include <iostream>
using namespace std;

int main(){
    //generando tipo puntero
    int* pointInt;

    float* pointFloat;
    //poniendo memoria dinamica.
    pointInt = new int;
    pointFloat = new float;

    //asignando los valores de memoria
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    //liberando la memoria
    delete pointInt;
    delete pointFloat;
    
    return 0;
}