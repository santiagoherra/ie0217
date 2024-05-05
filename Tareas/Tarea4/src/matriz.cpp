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

    // Métodos de entrada
    void setDimensiones(int filas, int columnas) {
        if (filas <= 0 || columnas <= 0)
            throw std::invalid_argument("Dimensiones invalidas.");
        this->filas = filas;
        this->columnas = columnas;
        data.resize(filas, std::vector<T>(columnas));
    }

    void llenarMatriz() {
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
        if (this->filas != other.filas || this->columnas != other.columnas)
            throw std::invalid_argument("Las dimensiones no permiten la suma.");
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

    }
};
