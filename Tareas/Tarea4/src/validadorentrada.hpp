/**
 * @file validadorentrada.hpp
 * @author Santiago Herra
 * @brief Clase que valida las dimensiones y las entradas de las matirices que ingresa el usuario
 * @version 0.1
 * @date 2024-05-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef VALIDADORENTRADA_HPP
#define VALIDADORENTRADA_HPP

#include "matriz.hpp"
#include <string>
#include <stdexcept>
#include <type_traits>
#include <complex>

/// @brief De tipo template y valida las matrices que ingresa el usuario
/// @tparam T 
template<typename T>
class ValidadorDeEntrada {
public:
    void validarTipoDato(Matriz<T> m1);
    void validarDimensiones(int filas, int columnas);

};


#endif

