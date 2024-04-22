#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Inicializa el contener set desordenado con valores integer
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    // Imprime los valores del contenedor sin orden y no repetidos
    cout << "Numbers are: ";
    for(auto &num : numbers) {
        cout << num << ", ";
    }

    return 0;
}
