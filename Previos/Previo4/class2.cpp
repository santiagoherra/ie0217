#include <iostream>
using namespace std;

class Molde {

    public:
        double largo;
        double ancho;
        double alto;


        Molde(double largo_p, double ancho_p, double alto_p):largo(largo_p),ancho(ancho_p),alto(alto_p){
            cout << "Probando si se puede imprimir" << endl;//nueva sintaxis declarando que se usaran los parametros
        }//otra manera de constructor pero con parametros
        //sintaxis diferente

        double calcularArea() {
            return largo * ancho;
        }

        double calcularVolumen(){   
            return largo * ancho * alto;
        }
};

int main(){

    int variable_entera;

    Molde pared(10.0, 20.0, 35.0);//parametro de los atributos


    cout << "El area es: " << pared.calcularArea() << endl;
    cout << "El volumen es: " << pared.calcularVolumen() << endl;

    return 0;
}