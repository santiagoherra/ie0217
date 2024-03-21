#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

    cout << "Enter two numbers: "; << endl; 
    cin >> num1 >> num2;

    switch (oper) { // switch case de los casos de operador.
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero!";
            break;
        default:
            // Si el operador no coincide con ningún caso constante
            cout << "Error! The operator is not correct.";
            break;
    }

    return 0;
}
