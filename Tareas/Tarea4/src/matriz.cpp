#include <vector>
#include <iostream>
#include <exception>

template<typename T>
class Matriz {
private:
    std::vector<std::vector<T>> data;
    int filas;
    int columnas;

public:
    // Constructor y destructor
    Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
        data.resize(filas, std::vector<T>(columnas));
    }

    ~Matriz();

    // Metodos de entrada, define el tammano de la matriz
    void setDimensiones(int filas, int columnas) {
        if (filas <= 0 || columnas <= 0)
            throw std::invalid_argument("Dimensiones invalidas.");
        this->filas = filas;
        this->columnas = columnas;
        data.resize(filas, std::vector<T>(columnas));
    }

    void llenarMatriz() { //Ingresa los valores de la matriz
        std::cout << "Ingrese los elementos de la matriz:" << std::endl;
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                std::cin >> data[i][j];
            }
        }
    }

    // Sobrecarga de operador +
    Matriz<T> operator+(const Matriz<T>& other) {
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

    //Sobrecarga de operador -
    Matriz<T> operator-(const Matriz<T>& other){
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

    //Sobrecarga de operador *
    Matriz<T> operator*(const Matriz <T>& other){
        if (this->columnas != other.filas)
            throw std::invalid_argument("Las dimensiones no permiten la multiplicacion.");
        Matriz<T> result(other.filas, this->columnas);
        for (int i= 0; i < other.filas; ++i){
            for (int j = 0; j < this->columnas; ++j){
                for (int k; k < other.filas; --k){
                    T valor += this->data[k][i] + other.data[j][k];
                    result.data[i][j] = valor;
                }
            }
        }
        return result;
    }
};
