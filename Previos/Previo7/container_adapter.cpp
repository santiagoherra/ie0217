#include <iostream>
#include <stack> 
using namespace std;

int main (){

    //Se crea la estructura de stack
    stack <int> numbers;

    //Agrega valores con comando push
    numbers.push(1);
    numbers.push(100);
    numbers.push (10);


    cout<< "Numbers are: ";

    //Imprimir los numeros con LIFO
    while(!numbers.empty()){
        cout<< numbers.top()<< ", ";
        numbers.pop();

    }
return 0;

}
