#include <iostream>
using namespace std;

class Molde {

    public://tipo de acceso de los atributos
        double largo;
        double ancho;
        double altura;


        Molde(){//constructor de cle tipo molde
            cout << "Esto se ejecuta en cada instanciacion" << endl;
            cout << "Iniciando un objeto de la clase Room" << endl;
        }

        double calcularArea() {
            return largo * ancho;
        }

        double calcularVolumen(){   
            return largo * ancho * altura;
        }
};

int main(){


    Molde pared;


    pared.largo = 400.5; //cambiando valores del constructor de molde.
    pared.ancho = 20.8;
    pared.altura = 315.2;


    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}
