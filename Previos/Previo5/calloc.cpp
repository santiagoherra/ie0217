#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));//inicializando el bloque de memoria en 0
    if (!ptr){
        cout << "Memory ALlocation failed";
        exit(1);
    }
    cout << "Initializing values..." << endl;

    for (int i = 0; i < 5; i++){
        ptr[i] = i*2+1; //agregando los valores de memoria gracias al calloc
    }
    cout << "Initialized values" << endl;//imprimiendo los valores del calloc
    for (int i = 0; i < 5; i++){
        cout << *(ptr + i) << endl;
    }
    
    free(ptr);
    
    return 0;
}