#include <iostream>
using namespace std;

// función para mostrar un número entero y un número decimal
void displayNum(int n1, float n2) {
    cout << "The integer number is " << n1;
    cout << "The double number is " << n2;
}

int main() {
    int num1 = 5;
    double num2 = 5.5;

    displayNum(num1, num2);//invocando funcion

    return 0;
}
