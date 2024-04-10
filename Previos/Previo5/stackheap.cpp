#include <iostream>

//Variable global 
int globalVariable = 42;

int main(){
    int stackVariable = 10; //variable guardada en stack

    int* heapVariable = new int(20);//variable guardada en heap

    std::cout << "Valor de globalVariable " << globalVariable << std::endl;
    std::cout << "Valor de stackVariable " << stackVariable << std::endl;
    std::cout << "Valor de globalVariable " << *heapVariable << std::endl;

    //liberar memoria de la variable en heap
    delete heapVariable;
    
    return 0;
}
