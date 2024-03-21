#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    Distance *ptr, d;

    ptr = &d; 

    cout << "Enter feet: ";
    cin >> ptr->feet; // mejor manera de hacerlo sin el parentesis para que se cambie la informacion en el struct

    cout << "Enter inch: ";
    cin >> ptr->inch; 

    cout << "Displaying information." << endl;
    cout << "Distance = " << ptr->feet << " feet and " << ptr->inch << " inches";

    return 0;
}
