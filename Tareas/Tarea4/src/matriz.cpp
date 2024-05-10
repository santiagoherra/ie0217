#include "matriz.hpp"
#include <exception>
#include <complex>
#include <limits>

template<typename T>
Matriz<T>::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    data.resize(filas, std::vector<T>(columnas));
}

template<typename T>
Matriz<T>::~Matriz() {}

template<typename T>
void Matriz<T>::setDimensiones(int filas, int columnas) {
    if (filas <= 0 || columnas <= 0)
        throw std::invalid_argument("Dimensiones invalidas.");
    this->filas = filas;
    this->columnas = columnas;
    data.resize(filas, std::vector<T>(columnas));
}
template<typename T>
int Matriz<T>::getFilas()const{
     return filas; }

template<typename T>
int Matriz<T>::getColumnas()const {
     return columnas; }

template<typename T>
void Matriz<T>::llenarMatriz() {
    std::cout << "Ingrese los elementos de la matriz:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            T elemento;
            std::cin >> elemento;
            if (std::cin.fail()) {
                std::cin.clear();  // Limpia el error de flujo
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignora el resto de la línea

                // Lanza una excepción si el tipo ingresado es incorrecto
                throw std::invalid_argument("Se ingresó un tipo de dato incorrecto para la matriz.");
            }
        }
    }
}

template<typename T>
void Matriz<T>::imprimirMatriz() {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template<typename T>
Matriz<T> Matriz<T>::operator+(const Matriz<T>& other) {
    if (this->filas != other.filas || this->columnas != other.columnas)
            throw std::invalid_argument("Las dimensiones no permiten la suma.");
        Matriz<T> result(this->filas, this->columnas);
        for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < this->columnas; ++j) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
}

template<typename T>
Matriz<T> Matriz<T>::operator-(const Matriz<T>& other) {
    if (this->columnas != other.filas || this->columnas != other.columnas)
            throw std::invalid_argument("Las dimensiones no permiten la resta.");
        Matriz<T> result(this->filas, this->columnas);
        for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < this->columnas; ++j) {
                result.data[i][j] = this->data[i][j] - other.data[i][j];
            }
        }
        return result;
}

template<typename T>
Matriz<T> Matriz<T>::operator*(const Matriz<T>& other) {
    if (this->columnas != other.filas)
            throw std::invalid_argument("Las dimensiones no permiten la multiplicacion.");
        Matriz<T> result(other.filas, this->columnas);
        for (int i= 0; i < other.filas; ++i){
            for (int j = 0; j < this->columnas; ++j){
                for (int k; k < other.filas; --k){
                    T valor;
                    valor += this->data[k][i] + other.data[j][k];
                    result.data[i][j] = valor;
                }
            }
        }
        return result;
}


