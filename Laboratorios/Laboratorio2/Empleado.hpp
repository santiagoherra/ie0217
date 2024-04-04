#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado{//constructor base del programa. Empleado para poder ir generando las herencias de los tipos de empleados
    protected:
        std::string nombre;
        int edad;;
        double salario;

    public:
        Empleado(std::string _string , int _edad, double _salario);//constructor base
        virtual ~Empleado(){}
        virtual double calcularPago() const = 0; //metodo virtual puro, se tiene que redefinir.
        virtual void mostrarDetalles() const;
};

#endif