#include "validadorentrada.hpp"

template<typename T>
void ValidadorDeEntrada<T>::validarTipoDato(Matriz<T> m1){
    if (!std::is_same<T, int>::value && !std::is_same<T, float>::value && 
        !std::is_same<T, std::complex<float>>::value && !std::is_same<T, std::complex<double>>::value) {
        throw std::invalid_argument("Tipo de dato no soportado para la operación.");
    }
}

template<typename T>
void ValidadorDeEntrada<T>::validarDimensiones(int filas, int columnas){
    if(filas <= 0 || columnas <= 0){
        throw std::invalid_argument("Dimensiones invalidas.");
    }
}

template class ValidadorDeEntrada<int>;
template class ValidadorDeEntrada<float>;
template class ValidadorDeEntrada<std::complex<double>>;