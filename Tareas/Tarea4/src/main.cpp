/**
 * @file main.cpp
 * @author Santiago Herra
 * @brief Es la funcion main del programa donde se utilizan todas las clases hechas, ademas se posee un menu de interaccion
 * @version 0.1
 * @date 2024-05-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "matriz.hpp"
#include "operacionesbasicas.hpp"
#include "validadorentrada.hpp"
#include <iostream>
#include <complex>

    /// @brief Se tiene una funcion donde se implementa la logica del menu despues de que se haya escogido el tipo de dato que se utilizara
    /// @tparam T 
    /// @param filas1 
    /// @param columnas1 
    /// @param filas2 
    /// @param columnas2 
    template <typename T>
    void trabajarMatrices(int filas1, int columnas1, int filas2, int columnas2){
        int tipo_operacion;
        int opcion_menu;
        bool salir = false;

        ///Instanciacion de los obejtos segun la plantilla utilizada
        OperacionesBasicas<T> ope;
        Matriz<T> m1(filas1,columnas1);
        Matriz<T> m2(filas2,columnas2);
        ValidadorDeEntrada<T> vali;


        m1.setDimensiones(filas1,columnas1);
        m2.setDimensiones(filas2, columnas2);

        ///Se pregunta el tipo de operacion que se desea realizar
        std::cout << "Ingrese el tipo de operacion que desea realizar.\n1) Suma\n2) Resta\n3) Multiplicacion\n" << std::endl;
        std::cin >> tipo_operacion;

        //Se llenan los valores de la matriz por el usuario
        std::cout << "\nPara la matriz 1\n" << std::endl;
        m1.llenarMatriz();
        vali.validarTipoDato(m1);

        std::cout << "\nPara la matriz 2\n" << std::endl;
        m2.llenarMatriz();
        vali.validarTipoDato(m2);

        ///Implementacion del menu con las opcioes dadas
        do{
            std::cout << "Que desea realizar" << std::endl;
            std::cout << "1) Llenar las matrices de valores aleatorios." << std::endl;
            std::cout << "2) Mostrar los valores de las matrices" << std::endl;
            std::cout << "3) Ejecutar la operacion ingresada." << std::endl;
            std::cout << "4) salir." << std::endl;
            std::cin >> opcion_menu;

            switch (opcion_menu){
            case 1:///Se llenan los valores de las matrices de manera aleatoria
                std::cout << "Se ingresaran valores aleatorios a las matrices" << std::endl;
                m1.llenarMatrizAleatoriamente();
                m2.llenarMatrizAleatoriamente();
                break;

            case 2:///Se imprimen los valores de las matrices
                std::cout << "\nLa matriz 1 es:\n" << std::endl;
                m1.imprimirMatriz();
                std::cout << "\nLa matriz 2 es:\n" << std::endl;
                m2.imprimirMatriz();
                break;

            case 3:///Se realiza la operacion que se establecio previamente
                switch (tipo_operacion){
                case 1:
                    std::cout << "\nRealizando suma\n" << std::endl;
                    ope.suma(m1,m2);
                    break;

                case 2:
                    std::cout << "\nRealizando resta\n" << std::endl;
                    ope.resta(m1,m2);
                    break;
                
                case 3:
                    std::cout << "\nRealizando multiplicacion\n" << std::endl;
                    ope.multiplicacion(m1,m2);
                    break;
            
                default:
                    break;
                }
                break;

            case 4:///Se sale del programa.
                salir = true;
                break;
            default:
                std::cout << "Elija una opcion correcta" << std::endl;
                break;
            }
        }
        while (!salir);

}

int main() {
    int filas1, columnas1,filas2, columnas2, tipo_dato;

    ValidadorDeEntrada<int> vali;

    ///Se ingresan los valore de los tammanos de las dos matrices
    std::cout << "Ingrese el tamaño de la fila de la matriz 1: " << std::endl;
    std::cin >> filas1;
    std::cin.ignore();
    std::cout << "Ingrese el tamaño de la columna de la matriz 1: " << std::endl;
    std::cin >> columnas1;

    //Se validan las dimensiones dadas
    vali.validarDimensiones(filas1,columnas1);

    std::cout << "Ingrese el tamaño de la fila de la matriz 2: " << std::endl;
    std::cin >> filas2;
    std::cin.ignore();
    std::cout << "Ingrese el tamaño de la columna de la matriz 2: " << std::endl;
    std::cin >> columnas2;

    vali.validarDimensiones(filas2,columnas2);

    ///Se elige el tipo de dato que se desea dentro de las matrices
    std::cout << "\nIngrese el tipo de dato que va a ingresar a la matriz\n1) Entero\n2) Flotante\n3) Complejo.\n" << std::endl;
    std::cin >> tipo_dato;

    ///Se escoje el tipo de obejto que se utilizara para las matrices
    switch (tipo_dato) {
    case 1:
        trabajarMatrices<int>(filas1, columnas1, filas2, columnas2);
        break;
    case 2:
        trabajarMatrices<float>(filas1, columnas1, filas2, columnas2);
        break;
    case 3:
        trabajarMatrices<std::complex<double>>(filas1, columnas1, filas2, columnas2);
        break;
    default:
        std::cout << "Tipo de dato no válido." << std::endl;
        return 1;
    }

    return 0;
}

