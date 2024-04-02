#include <iostream>
using namespace std;
class ClassB;
class ClassA { 
    private: 
        int numA;

        // declaracion de clase amiga de tipo ClassB
        friend class ClassB;
    public:
        ClassA(): numA (12) {}
};        
class ClassB {
    private:
        int numB;
    public:
        // declaracoin de clase B
        ClassB(): numB(1) {}
        //  funcion que puede acceder a clase A gracias a la declaracion 
        int add() {
            ClassA objectA;
            return objectA.numA + numB;
    }
};
int main() {
        ClassB objectB;
        cout << "Sum: " << objectB.add();
        return 0;
}