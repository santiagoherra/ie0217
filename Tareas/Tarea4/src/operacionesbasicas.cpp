/**
 * @file operacionesbasicas.cpp
 * @author Santiago Herra
 * @brief Es el codigo de operacionesBasicas, el cual describe los metodos de la clase
 * @version 0.1
 * @date 2024-05-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "operacionesbasicas.hpp"
#include <exception>

/// @brief Obtiene las columnas y las filas mediante los metodos get
/// @tparam T 
/// @param a 
/// @param b 
/// @return 
template<typename T>
bool OperacionesBasicas<T>::validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
    return a.getFilas() == b.getFilas() && a.getColumnas() == b.getColumnas();
}

template<typename T>
bool OperacionesBasicas<T>::validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
    return a.getColumnas() == b.getFilas();
}

/// @brief Realiza la suma e imprime el resultado
/// @tparam T 
/// @param a 
/// @param b 
template<typename T>
void OperacionesBasicas<T>::suma(Matriz<T> a, Matriz<T> b) {
    bool confirmacion = validarSumaResta(a, b);
    if (!confirmacion) {
        throw std::invalid_argument("Las dimensiones no permiten la suma");
    }
    Matriz<T> c = a + b;
    c.imprimirMatriz(); // Supongamos que queremos ver el resultado
}

/// @brief Realiza la resta e imprime el resultado
/// @tparam T 
/// @param a 
/// @param b 
template<typename T>
void OperacionesBasicas<T>::resta(Matriz<T> a, Matriz<T> b) {
    bool confirmacion = validarSumaResta(a, b);
    if (!confirmacion) {
        throw std::invalid_argument("Las dimensiones no permiten la resta");
    }
    Matriz<T> c = a - b;
    c.imprimirMatriz(); 
}

/// @brief Realiza la multiplicacion e imprime el resultado
/// @tparam T 
/// @param a 
/// @param b 
template<typename T>
void OperacionesBasicas<T>::multiplicacion(Matriz<T> a, Matriz<T> b) {
    bool confirmacion = validarMultiplicacion(a, b);
    if (!confirmacion) {
        throw std::invalid_argument("Las dimensiones no permiten la multiplicación");
    }
    Matriz<T> c = a * b;
    c.imprimirMatriz(); 
}

template class OperacionesBasicas<int>;
template class OperacionesBasicas<float>;
template class OperacionesBasicas<std::complex<double>>;


