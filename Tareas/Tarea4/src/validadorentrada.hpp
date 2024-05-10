#include "matriz.hpp"
#include <string>
#include <stdexcept>

template<typename T>
class ValidadorDeEntrada {
public:
    void validarTipoDato(Matriz<T> m1);
    void validarDimensiones(int filas, int columnas);

};

