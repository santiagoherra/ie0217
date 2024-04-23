#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> nums {1, 2, 3, 4, 5};
    //Inicializando el iterador al inicio
    list<int>::iterator itr = nums.begin();

    cout << "Moving Forward: " << endl;

    //Imprimiendo los valores de la lista
    while (itr != nums.end()){
        cout << *itr << ", ";

        itr ++;
    }
    cout << endl <<  "Moving backward: " << endl;

    //Impriiendolos de manera inversa
    while (itr != nums.begin()){
        if (itr != nums.end()){
            cout << *itr << ", ";
        }
        itr --;
    }
    cout << *itr << endl;

    return 0;
}