#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Inicializa el contenedor vector con valores integer
    vector<int> numbers = {1, 100, 10, 70, 100};

    // Imprime los valores sin orden y repetidos
    cout << "Numbers are: ";
    for(auto &num: numbers) {
        cout << num << ", ";
    }
    
    return 0;
}
