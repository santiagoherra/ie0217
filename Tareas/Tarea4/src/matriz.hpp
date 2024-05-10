#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <vector>
#include <iostream>
#include <complex>

template<typename T>
class Matriz {
private:
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

    Matriz<T> operator+(const Matriz<T>& other);
    Matriz<T> operator-(const Matriz<T>& other);
    Matriz<T> operator*(const Matriz<T>& other);
};

// Explicit template instantiation
template class Matriz<int>;
template class Matriz<float>;
template class Matriz<std::complex<double>>;


#endif
