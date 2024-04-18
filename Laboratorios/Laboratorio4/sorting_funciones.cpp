#include "sorting.hpp"

using namespace std;
using namespace std::chrono;

//Algoritmo de bubblesort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Algoritmo de selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

//Algoritmo de insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

//Algoritmo de partion (no se usa)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

//Algoritmo de quick sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

//Funcion que genera arrays aleatorios
void generateRandomArray(int arr[], int n){//No se ocupa referencia porque con arrys se hace automaticos
    srand(time(0));
    for(int i = 0; i < n; ++i){
        arr[i] = rand() % 1000;
    }
}

void measuringQuickSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName){
    //Se esta pasando un puntero de una funcion que recibbe los parametros int [] e int 
    //es como agregar la funcion como parametro

    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr, low, high);
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds> (stop-start);//Especificacion auto porque no sabemos el tipo de valor
    
    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;
}

void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName){
    //Se esta pasando un puntero de una funcion que recibbe los parametros int [], int e int
    //es como agregar la funcion como parametro

    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr, n);
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
    
    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;
}
