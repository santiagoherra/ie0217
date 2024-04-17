#include <iostream>
using namespace std;

// Funcion para intercambiar valores enteros
void swap(int* a, int* b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

// Imprime el array
void printArray(int array[], int size){ 

    for (int i = 0; i < size; i++){ 
        cout << array[i] << " "; 
    }
    cout << endl; 
}

// Ordenar un arreglo utilizando Selection Sort
void selectionSort(int array[], int size){
    for (int step = 0; step < size - 1; step++){
        // Encuentra el indice minimo donde no esta ordenado
        int min_idx = step;
        for (int i = step + 1; i < size; i++){
            if (array[i] < array[min_idx]){
                min_idx = i;
            }
        }
        // Intercambia el elemento minimo con el primer elemento del arreglo no ordenado
        swap(&array[min_idx], &array[step]);
    }
}


int main(){
    
    int data[] = {20, 12, 10, 15, 2};
    
    int size = sizeof(data)/sizeof(data[0]);
    
    selectionSort(data, size);
    
    cout << "Sorted array in Acsending Order: \n";
    
    printArray(data, size);
    
    return 0;
}
