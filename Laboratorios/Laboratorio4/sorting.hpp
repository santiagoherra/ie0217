#ifndef SORTING_HPP
#define SORTING_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono;

//Declaracion de funciones
void bubbleSort(int arr[], int n);

void selectionSort(int arr[], int n);

void insertionSort(int arr[], int n);

int partition(int arr[], int low, int high);

void quickSort(int arr[], int low, int high);

void generateRandomArray(int arr[], int n);

void measuringQuickSortTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName);

void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName);


#endif