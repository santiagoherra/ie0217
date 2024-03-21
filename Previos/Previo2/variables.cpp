#include <iostream> 
using namespace std; 

// Variable global: 
int g; 

int main() { 
    // Variables locales: 
    int a, b; 
    
    // Inicialización de 'a' y 'b' (¡asumiendo que se suponía ser algún valor específico!)
    a = 10; // Por ejemplo, inicializando 'a' con el valor 10
    b = 20; // Por ejemplo, inicializando 'b' con el valor 20
    g = a + b;
    
    // Imprimiendo el valor de 'g' (¡asumiendo que era la intención!)
    cout << g; 
    
    // Retornando 0 al finalizar el programa (¡asumiendo que es la convención!)
    return 0; 
}
