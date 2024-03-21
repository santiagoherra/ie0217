#include <iostream> 
using namespace std; 

// función prototipo
int add(int, int); 

int main() { 
    int sum; 
    // llamando a la función y almacenando
    // el valor retornado en sum 
    sum = add(100, 78); 
    cout << "100 + 78 = " << sum << endl; 
    return 0; 
} 

// definición de la función
int add(int a, int b) { 
    return (a + b); 
} 
