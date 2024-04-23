#include <iostream>
#include <vector>
using namespace std;

int main() {

    //Se inicializa el vector con numeros 
    vector<int> vec{1, 2, 3, 4};

    //Se crea el iterador desde el inicio y desde el final
    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end() - 1;

    //Imprimir los vectores
    cout << "First Element: " << *itr_first << endl;
    cout << "Second Element: " << itr_first[1] << endl;

    cout << "Second Last Element: " << *(itr_last - 1) << endl;
    cout << "Last Element: " << *(itr_last) << endl; 

    return 0;   
}