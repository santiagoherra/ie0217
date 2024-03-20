#include <iostream> 
using namespace std; 

void test() {
    // var es una variable estática
    static int var;
    ++var;
    cout << var << endl;
}

int main() {
    test(); // llamada a la funcion
    test(); 
    return 0;
}
