#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    
    int* ptr = (int*) malloc(sizeof(int));//inicializando bloque de memoria en

    *ptr = 5;

    cout << *ptr;
    
    return 0;
}