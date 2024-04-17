#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

    for (int step = 0; step < size - 1; ++step) {
        
        for (int i = 0; i < size - step - 1; ++i) {//Se crea  el bucle para poer hacer el cambio de burbuja.
                                                    //entre dos elementos, asi hasta que se termina.
            
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {//Imprimir el array
    for (int i = 0; i < size; ++i) {
        cout << "  " << array[i];
    }
    cout << "\n";
}

int main() {
    int data[] = {11, -2, 5 ,0};
    int size = sizeof(data) / sizeof(data[0]); //Encuentra la longitud del array

    bubbleSort(data, size);

    cout << "Array ordenado en orden ascendente:\n ";
    printArray(data, size);

    return 0;
}
