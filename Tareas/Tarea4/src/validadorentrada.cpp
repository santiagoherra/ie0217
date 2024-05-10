/**
 * @file validadorentrada.cpp
 * @author Santiago Herra
 * @brief Es el codigo de validador de entrada
 * @version 0.1
 * @date 2024-05-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "validadorentrada.hpp"

/// @brief Valida las entradas de la mtrices para asegurarse que los datos son validos
/// @tparam T 
/// @param m1 
template<typename T>
void ValidadorDeEntrada<T>::validarTipoDato(Matriz<T> m1){
    if (!std::is_same<T, int>::value && !std::is_same<T, float>::value && 
        !std::is_same<T, std::complex<float>>::value && !std::is_same<T, std::complex<double>>::value) {
        throw std::invalid_argument("Tipo de dato no soportado para la operación.");
    }
}

/// @brief Validas las dimensiones de las matrices dadas.
/// @tparam T 
/// @param filas 
/// @param columnas 
template<typename T>
void ValidadorDeEntrada<T>::validarDimensiones(int filas, int columnas){
    if(filas <= 0 || columnas <= 0){
        throw std::invalid_argument("Dimensiones invalidas.");
    }
}

template class ValidadorDeEntrada<int>;
template class ValidadorDeEntrada<float>;
template class ValidadorDeEntrada<std::complex<double>>;