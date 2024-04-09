//Queue en C++
#include<iostream>
#define SIZE 5
using namespace std;

class Queue{
    private:
    int items [SIZE], front, rear;//crea la clase del queue o la fila 

    public:
    Queue(){
        front= -1;
        rear= -1;
    }
    bool isFull(){
        if (front ==0 &&rear == SIZE -1){//pregunta si es el queue esta lleno
            return true;
        }
        return false;
    }
    bool isEmpty(){//pregunta si el queue esta vacio
        if(front== -1)
            return true;
        else
            return false;
    }
    void enQueue(int element){//pasa a un elemento a la fila
        if(isFull()){
            cout<<"El queue esta lleno";  
        } else{
            if (front== -1) front = 0;
            rear++;
            items[rear] = element;
            cout<<"Inserted " <<element<<endl;
        }
    }
    int deQueue(){//saca a un elemento de la cola
        int element;
        if (isEmpty()){
            cout<<"El queue esta vacio"<<endl;
            return(-1);
        }else{
            element= items[front];
        if (front >= rear){
            front= -1;
            rear= -1;
        }
        else{
            front++;
        }
        cout<<"Borrado" << element<<endl;
        return(element);
        }
        
    }
    void Display(){//imprimir los valores de la cola
        
        int i;
        if (isEmpty()){
            cout<<"Queue vacio"<<endl;
        }else{
            cout<<"Indice Frontal -> "<< front;
            cout<< endl
            <<"Items -> ";
            for (i=front; i<= rear; i++)
                cout<<items[i]<< " ";
                cout<<endl
                << "Indice de Atras-> "<<rear<<endl;
        }
    }
};

int main(){
    Queue q;
//ejemplos de la fila
    q.deQueue();

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);

    q.Display();
    q.deQueue();

    q.Display();

    return 0;
}