#include <iostream>
using namespace std;

class Distance {
private:
    int meter;

    // declaracion previa de funcion amiga
    friend int addFive(Distance);

public:
    Distance() : meter(0) {}
};


int addFive(Distance d) {
    // se puede acceder a la funcion por la declaracion previa
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << addFive(D); //utilizando gracias a funciones amigas
    return 0;
}
