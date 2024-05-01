#include <iostream>
using namespace std;

int main (){
  
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0}; 
    int index;

    cout<<"Enter array index: "; 
    cin >> index;

    try {
    // Agarra excepcion si el array sale fuera de su rango
    if (index >= 4) 
    throw "Error: Array out of bounds!"; 
    // Si todo sale bien sigue
    cout<<"Enter numerator: ";
    cin >> numerator;
    cout<<"Enter denominator: ";
    cin >> denominator;

    // Excepcion si el denominador es 0
    if (denominator == 0) 
        throw 0; 
    // Si todo sale bien sigue
    arr[index] = numerator / denominator; 
    cout << arr[index] << endl;
    }

    //Agarra si se sale de rango
    catch (const char* msg) {  
        cout << msg << endl;
    }
    // Agarra si no se puede dividir 
    catch (int num) {
        cout << "Error: Cannot divide by " << num << endl;
    }
    // Agarrar excepciones generales
    catch (...) {
        cout << "Unexpected exception! " << endl; 
    }
    return 0;
}

