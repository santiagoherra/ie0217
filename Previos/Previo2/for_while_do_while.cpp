#include <iostream> 

using namespace std;

int main() {
    for (int i - 1; i <= 5; ++i) { 
        cout << i << " "; // impresion de i en bucle for
    }
    
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int n : num_array) {
        cout << n << " "; //  impresion de array
    }

    int i = 1;

    while (i <= 5) { 
        cout << i << " "; //while con bucle
        i++; 
    } 

    int i = 1;
    
    // usa un bucle do-while para imprimir números del 1 al 5
    do {
        cout << i << " "; 
        ++i; // incrementa i
    } while (i <= 5); // continúa el bucle mientras i sea menor o igual a 5

    return 0;


}

