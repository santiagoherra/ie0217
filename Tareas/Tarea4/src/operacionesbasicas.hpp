/**
 * @file operacionesbasicas.hpp
 * @author Santiago Herra
 * @brief Es el header de la clase que realizara las operaciones basicas de las matrices
 * @version 0.1
 * @date 2024-05-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include "matriz.hpp"
/// @brief Se utiliza en la clase plantillas de igual manera
/// @tparam T 
template<typename T>
class OperacionesBasicas {
public:
    /// @brief Valida si la suma y la resta con validaz para las matrices
    /// @param a 
    /// @param b 
    /// @return 
    bool validarSumaResta(const Matriz<T>& a, const Matriz<T>& b);

    /// @brief Valida si la multiplicacion de las matrices es valida
    /// @param a 
    /// @param b 
    /// @return 
    bool validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b);

    /// @brief Realiza la suma de las matrices con sobrecarga
    /// @param a 
    /// @param b 
    void suma(Matriz<T> a, Matriz<T> b);

    /// @brief Realiza la resta de las matrices con sobrecarga
    /// @param a 
    /// @param b 
    void resta(Matriz<T> a, Matriz<T> b);

    /// @brief Realiza la multiplicacion de las matrices con sobrecarga
    /// @param a 
    /// @param b 
    void multiplicacion(Matriz<T> a, Matriz<T> b);
};


#endif
