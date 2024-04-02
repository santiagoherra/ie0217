#include <iostream>
using namespace std;

class Animal {

    public://publicas
        void setEdad(int age) {
            edad = age;
        }
        int getEdad(){
            return edad;
        }

    protected://protegidas
        string nombre;

    private://privadas
        int edad;
};

class Perro : public Animal {//derivada de animal, herencia
    public:
        void setNombre(string n) {
            nombre = n;
        }
        string getNombre() {
            return nombre;
        }
};

int main() {
    Perro miPerro;
    miPerro.setNombre("Toby");
    miPerro.setEdad(3);
    //es posible ingresar a las cles protegidas y privadas.
    cout << "Mi perro se llama " << miPerro.getNombre() << endl;
    cout << "y tiene " << miPerro.getEdad() << " años." <<endl;

    return 0;
}