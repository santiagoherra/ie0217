#include "EmpleadoAsalariado.hpp"

EmpleadoAsalariado::EmpleadoAsalariado(std::string _nombre, int _edad, double _salario)
    : Empleado (_nombre, _edad, _salario) {}//constructor base de empleado asalariado

double EmpleadoAsalariado::calcularPago() const {// redefinicion
    return salario;
}