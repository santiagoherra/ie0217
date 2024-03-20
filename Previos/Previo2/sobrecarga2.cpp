#include <iostream> 
using namespace std; 

// Función con 2 parámetros (int y double)
void display(int var1, double var2) { 
    cout << "integer number: " << var1; 
    cout << " and double number: " << var2 << endl; 
}

// Función con un solo parámetro double
void display(double var) { 
    cout << "double number: " << var << endl; 
}

// Función con un solo parámetro int
void display(int var) { 
    cout << "integer number: " << var << endl; 
}

int main() { 
    int a = 5; 
    double b = 5.5; 
    
    display(a); 
    
    display(b); 
    
    display(a, b); 
    
    return 0; 
}
