#include <iostream>
using namespace std;
int main(){
    int* pointVar;

    pointVar = new int;//utilizando funcion new para genera memoria dinamica

    *pointVar = 45;

    cout << *pointVar;

    delete pointVar;//liberando la memoria de la variable
    
    return 0;
}
