#include <iostream>
using namespace std;


void BubbleSort(int array[], int size) {
    // Itera a traves de cada elemento del array
    for (int paso = 0; paso < (size - 1); ++paso) {
        // Verificar si se realizo el swap
        int swapped = 0;


        for (int i = 0; i < size - paso - 1; ++i) {
            // Compara el elemento actual con el siguiente
            if (array[i] > array[i + 1]) {
                // Si el elemento actual es mayor que el siguiente se intercambia
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swapped = 1;
            }
        }

        // Significa que ya esta ordenado
        if (swapped == 0)
            break;
    }
}

void Imprimir(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        // Imprime cada elemento del array
        cout << " " << array[i];
    }
    cout << "\n"; 
}

int main() {
    
    int datos[] = {-2, 45, 0, 11, -9};

    // Tamanno del arreglo
    int size = sizeof(datos) / sizeof(datos[0]);

    // Para arreglar el arreglo
    BubbleSort(datos, size);


    cout << "Array Ordenado de Manera Ascendente: \n";

    
    Imprimir(datos, size);

    
    return 0;
}
