#include "sorting.hpp"

using namespace std;
using namespace std::chrono;

int main(){//Aplicacion para la duracion de los algoritmos
    const int SIZE = 10000;
    int arr[SIZE];

    generateRandomArray(arr, SIZE);
    measuringSortingTime(bubbleSort, arr, SIZE, "Bubble Sort");

    generateRandomArray(arr, SIZE);
    measuringSortingTime(selectionSort, arr, SIZE, "Selection Sort");

    generateRandomArray(arr, SIZE);
    measuringSortingTime(insertionSort, arr, SIZE, "Insertion Sort");

    generateRandomArray(arr, SIZE);
    measuringQuickSortTime(quickSort, arr, 0, SIZE-1, "In Sort");

    return 0;

}
