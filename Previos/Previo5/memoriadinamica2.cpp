#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter total number of students:" << endl;
    cin >> num;
    float* ptr;

    //asignando lista de flotantes en memoria dinamica
    ptr = new float[num];

    //ingresando valores de estudiantes
    cout << "Enter GPA of student." << endl;
    for (int i = 0; i < num ; ++i){
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }
    //imprimiendo valores de estudiantes
    cout << "Displaying GPA of students." << endl;
    for (int i = 0; i< num ; ++i){
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    //liberando la lista
    delete[] ptr;
    
    return 0;
}