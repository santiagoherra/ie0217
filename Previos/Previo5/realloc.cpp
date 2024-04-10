#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    float *ptr, *new_ptr;
    ptr = (float*)malloc(5 *sizeof(float));//generando primer bloque de memoria
    if(ptr == NULL){
        cout << "Memory ALlocation Failed";
        exit(1);
    }

    for (int i = 0; i < 5; i++){
        ptr[i] = i * 1.5;
    }

    new_ptr = (float*)realloc(ptr, 10*sizeof(float));//utilizando el realloc para relocalizar el bloque de memoria
    if(new_ptr == NULL){
        cout << "Memory Re-allocation failed";
        exit(1);
    }

    for (int i = 5; i < 10; i++){
        new_ptr[i] = i * 2.5;
    }
    cout << "Printing Values" << endl;
    for (int i = 5; i < 10; i++){
        cout << new_ptr[i] << endl;//imprimiendo valores del realloc
    }
    free(new_ptr);//libernado el bloque de memoria
    
    return 0;
}