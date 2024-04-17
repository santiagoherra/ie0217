#include <iostream>
using namespace std;

//Funcion para imprimir el array. 
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}


void insertionSort(int array[], int size) {

    for (int step = 1; step < size; step++) {
        //Ingresa las variables de key y j 
        int key = array[step];
        int j = step - 1;
        //Itera en base reduciendo cada lugar del arreglo segun los menores numeros 
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }//Asigna el menor valor
        array[j + 1] = key;
    }
}

int main() {
    int data[] = {9, 5, 1, 4, 3};//Arreglo
    int size = sizeof(data) / sizeof(data[0]);//Determinar el tamanno del array

    insertionSort(data, size);
    cout << "Sorted array in ascending order:\n";
    printArray(data, size);

    return 0;
}