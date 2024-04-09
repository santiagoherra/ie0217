#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Node {//creacion de objeto nodo
public:
    int value;
    Node* next;
};

int main() {//asignacion de la cantidad de nodos que hay en el codigo
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    
    one = new Node();
    two = new Node();
    three = new Node();//asignando memoria dinamica al nodo

    //asignando valores a los nodos
    one->value = 1;
    two->value = 2;
    three->value = 3;

    //moviendo nodos de posicion, enlace de listas
    one->next = two;
    two->next = three;
    three->next = NULL;
    
    //imprimir los nodos
    head = one;
    while (head != NULL) {
        cout << head->value;
        head = head->next;
    }
    return 0;
}
