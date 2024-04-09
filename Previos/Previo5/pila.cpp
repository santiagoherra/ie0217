#include<iostream>
#include <stdlib.h>

using namespace std;

#define MAX 10
int sizee = 0;


struct stack{ //se define struct de pila
    int items[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack (st*s){//utilizando diferentes funciones de la pila, esta crea la pila
    s-> top = -1;
}


int isfull(st*s){//revisa si esta llena
    if (s-> top == MAX-1)
        return 1;
    else
        return 0;
}


int isempty (st*s){//verifica si esta vacia
    if(s-> top == -1)
        return 1;
    else
        return 0;
}


void push(st *s,int newitem){//hace la funcion push, agrega un item si no esta lleno
    if (isfull(s)){
        cout<<"STACK FULL";
    }else{
        s->top++;
        s-> items[s->top]= newitem;
    }

    sizee++;

    }


void pop(st *s){//saca e imprime un valor
    if (isempty(s)){
        cout<< "\n STACK VACIO\n";
    }else{
        cout<< "Item sacado= "<< s->items[s->top];
        s -> top --;
    }

    sizee--;

    cout<<endl;
    }


void printStack(st *s){//imprime los valores del stack
    printf("Stack: ");
    for (int i=0; i < sizee; i++){
        cout<< s-> items[i] <<"";
    }
    cout<<endl;
}


int main(){
    int ch;
    st *s= (st *) malloc(sizeof(st));

    createEmptyStack(s);

    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);

    printStack(s);

    pop(s);

    cout<< "\nDespues de sacar:\n";
    printStack(s);
}