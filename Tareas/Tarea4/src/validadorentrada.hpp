#ifndef VALIDADORENTRADA_HPP
#define VALIDADORENTRADA_HPP

#include "matriz.hpp"
#include <string>
#include <stdexcept>
#include <type_traits>
#include <complex>

template<typename T>
class ValidadorDeEntrada {
public:
    void validarTipoDato(Matriz<T> m1);
    void validarDimensiones(int filas, int columnas);

};


#endif

