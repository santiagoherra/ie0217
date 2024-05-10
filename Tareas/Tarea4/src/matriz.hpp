/**
 * @file matriz.hpp
 * @author Santiago Herra
 * @brief Este es el header de la clase matriz, este objeto sera utilizado en el programa para que se le ingresen valores
 * @version 0.1
 * @date 2024-05-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <vector>
#include <iostream>
#include <complex>
#include <random>
/// @brief Es una clase de tipo matriz
/// @tparam T Se utiliza una plantilla para pder ingresar el tipo de dato que se desee
template<typename T>
class Matriz {
private:
    /// @brief Se tiene que las filas y columnas dentro de la matriz son de tipo contenedor de tipo vector.
    std::vector<std::vector<T>> data;
    int filas;
    int columnas;

public:
    Matriz(int filas, int columnas);
    ~Matriz();

    int getFilas() const;
    int getColumnas() const;

    void setDimensiones(int filas, int columnas);
    void llenarMatriz();
    void imprimirMatriz();
    void llenarMatrizAleatoriamente();

    Matriz<T> operator+(const Matriz<T>& other);
    Matriz<T> operator-(const Matriz<T>& other);
    Matriz<T> operator*(const Matriz<T>& other);
};

/// @brief Se instancian los otros tipos de clases.
template class Matriz<int>;
template class Matriz<float>;
template class Matriz<std::complex<double>>;


#endif
