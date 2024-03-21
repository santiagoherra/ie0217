#include <iostream> 
using namespace std; 

// funcion para obtener el valor absoluto de un float
float absolute(float var) { 
    if (var < 0.0) 
        var = -var; // cambia el signo si es negativo
    return var; 
}

int absolute(int var) { 
    if (var < 0) 
        var = -var; // cambia el signo si es negativo
    return var; 
}

int main() { 
    
    cout << "Valor absoluto de -5: " << absolute(-5) << endl; 
    
    cout << "Valor absoluto de 5.5: " << absolute(5.5f) << endl; 
    
    return 0; 
}
