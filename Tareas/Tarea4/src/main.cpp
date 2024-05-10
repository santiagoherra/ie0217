#include "matriz.hpp"
#include "operacionesbasicas.hpp"
#include "validadorentrada.hpp"

template<typename T>
int main(){
    int filas;
    int columnas;
    int tipo_dato;
    int tipo_operacion;
    int opcion_menu;
    bool salir = false;

    OperacionesBasicas<T> ope;
    ValidadorDeEntrada<T> vali;

    std::cout << "Ingrese el tamanno de las filas de la matrices" << std::endl;
    std::cin >> filas;
    std::cin.ignore();
    std::cout << "Ingrese el tammano de las columnas de las matrices" << std::endl;
    std::cin >> columnas;

    vali.validarDimensiones(filas, columnas);

    Matriz<T> m1(filas,columnas);
    m1.setDimensiones(filas,columnas);

    Matriz<T> m2(filas,columnas);
    m2.setDimensiones(filas, columnas);

    std::cout << "\nIngrese el tipo de dato que va a ingresar a la matriz\n1) Entero\n2) Flotante\n3) Complejo.\n" <<std::endl;
    std::cin >> tipo_dato;

    std::cout << "Ingrese el tipo de operacion que desea realizar.\n1) Suma\n2) Resta\n 3) Multiplicacion\n" << std::endl;
    std::cin >> tipo_operacion;

    std::cout << "\nPara la matriz 1\n" << std::endl;
    m1.llenarMatriz();
    vali.validarTipoDato(m1);

    std::cout << "\nPara la matriz 2\n" << std::endl;
    m2.llenarMatriz();
    vali.validarTipoDato(m2);

    do{
        std::cout << "Que desea realizar" << std::endl;
        std::cout << "1) Llenar las matrices de valores aleatorios." << std::endl;
        std::cout << "2) Mostrar los valores de las matrices" << std::endl;
        std::cout << "3) Ejecutar la operacion ingresada." << std::endl;
        std::cout << "4) salir." << std::endl;
        std::cin >> opcion_menu;

        switch (opcion_menu){
        case 1:
            //llenar con valores aleatorios
            break;
            
        case 2:
            std::cout << "\nLa matriz 1 es:\n" << std::endl;
            m1.imprimirMatriz();
            std::cout "\nLa matriz 2 es:\n" << std::endl;
            m2.imprimirMatriz();
            break;

        case 3:
            switch (tipo_operacion){
            case 1:
                ope.suma(m1,m2);
                break;

            case 2:
                ope.resta(m1,m2);
                break;
            
            case 3:
                ope.multiplicacion(m1,m2)
                break;
        
            default:
                break;
            }
            break;

        case 4:
            salir = true;
            break;
        default:
            std::cout << "Elija una opcion correcta" << std::endl;
            break;
        }
    }
    while (!salir)
    
    

    

}
