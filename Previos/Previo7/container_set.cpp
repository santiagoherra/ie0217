#include <iostream>
#include <set>
using namespace std;

int main() {
    // Inicializa el contenedor tipo set con valores integer
    set<int> numbers = {1, 100, 10, 70, 100};

    //Imprime los valores en orden y no repetidos
    cout << "Numbers are: ";
    for (auto &num : numbers) {
        cout << num << ", ";
    }

    return 0;
}
