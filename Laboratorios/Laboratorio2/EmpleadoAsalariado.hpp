#ifndef EMPLEADOASALARIADO_HPP
#define EMPLEADOASALARIDO_HPP

#include "Empleado.hpp"

class EmpleadoAsalariado : public Empleado {// si no se indica el tipo se hace privado y header de empleado asalariada
//con herencia
    public:
        EmpleadoAsalariado(std::string _nombre, int _edad, double _salario);
        double calcularPago() const override;//hacer override que es necesario
};

#endif