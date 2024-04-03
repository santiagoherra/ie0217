#include <iostream>
using namespace std;

class Mammal{ //clase mammal
    public:
    Mammal(){
        cout << "Mammals can give direct birth" << endl;
    }
};
class WingedAnimal{ //clase winged
    public:
     WingedAnimal(){
        cout << " WInged animal can flap" << endl;
     }
};
class Bat: public Mammal, public WingedAnimal{}; //herencia multiple entre clases
int main(){
    Bat b1;
    return 0;
}