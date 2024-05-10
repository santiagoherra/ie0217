#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include "matriz.hpp"

template<typename T>
class OperacionesBasicas {
public:
    bool validarSumaResta(const Matriz<T>& a, const Matriz<T>& b);
    bool validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b);
    void suma(Matriz<T> a, Matriz<T> b);
    void resta(Matriz<T> a, Matriz<T> b);
    void multiplicacion(Matriz<T> a, Matriz<T> b);
};

#endif
