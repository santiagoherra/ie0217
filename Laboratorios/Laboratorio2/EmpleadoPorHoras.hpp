#ifndef EMPLEADOPORHORAS_HPP
#define EMPLEADOPORHORAS_HPP

#include "Empleado.hpp"

class EmpleadoPorHoras : public Empleado{//header base heredado de empleado de empleado por horas
    private:
        int horasTrabajadas;
    
    public:
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
        double calcularPago() const override;
};

#endif