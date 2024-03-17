#include <iostream>
using namespace std;

int main(){
    int var = 5;
    int* pointvar;

    pointvar = &var;

    cout << "var = " << var << endl;
    cout << "Address of var = " << &var << endl
        <<endl;

    cout << "pointvar = " << pointvar << endl;

    cout << "Content of the address pointed to by pointvar = " << *pointvar << endl; //contenido de la direccion de memoria

    return 0;
}

