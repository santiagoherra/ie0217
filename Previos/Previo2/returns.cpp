#include <iostream> 
using namespace std; 

// Declaración de una función
int add(int a, int b) { 
    return (a + b); 
}

int main() { 
    int sum; 
    
    sum = add(100, 78); 
    
    // Impresión del resultado
    cout << "100 + 78 = " << sum << endl; 
    
    return 0; 
}
