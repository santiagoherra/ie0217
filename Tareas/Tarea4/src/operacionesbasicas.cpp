#include "operacionesbasicas.hpp"
#include <exception>

template<typename T>
bool OperacionesBasicas<T>::validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
    return a.getFilas() == b.getFilas() && a.getColumnas() == b.getColumnas();
}

template<typename T>
bool OperacionesBasicas<T>::validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
    return a.getColumnas() == b.getFilas();
}

template<typename T>
void OperacionesBasicas<T>::suma(Matriz<T> a, Matriz<T> b) {
    bool confirmacion = validarSumaResta(a, b);
    if (!confirmacion) {
        throw std::invalid_argument("Las dimensiones no permiten la suma");
    }
    Matriz<T> c = a + b;
    c.imprimirMatriz(); // Supongamos que queremos ver el resultado
}

template<typename T>
void OperacionesBasicas<T>::resta(Matriz<T> a, Matriz<T> b) {
    bool confirmacion = validarSumaResta(a, b);
    if (!confirmacion) {
        throw std::invalid_argument("Las dimensiones no permiten la resta");
    }
    Matriz<T> c = a - b;
    c.imprimirMatriz(); 
}

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


