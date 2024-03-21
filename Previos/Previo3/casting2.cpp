#include <iostream>
using namespace std;

int main() {
    double num_double = 3.56;//inicializando numero
    cout << "num_double = " << num_double << endl;

    int num_int1 = (int)num_double; //casting tipo C
    cout << "num_int1 = " << num_int1 << endl;

    int num_int2 = int(num_double); //casting pero inverso al primero
    cout << "num_int2: " << num_int2 << endl;

    return 0;
}
