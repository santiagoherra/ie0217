#include <iostream>
using namespace std;

int factorial(int);//ejemplo clasico de factorial, se declara la funcion desde antes porque se utiliza en el main

int main() {
    int n, result;
    
    cout << "Enter a non-negative number: ";
    cin >> n;
    
    result = factorial(n);
    
    cout << "Factorial of " << n << " is " << result;
    
    return 0;
}

int factorial(int n) {
    if (n > 1){
        return n * factorial(n -1);
    }
    else{
        return 1;
    }
}
