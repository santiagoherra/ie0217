#include "correo.hpp"

enum opciones{
    CORREO = 1,
    SALIR,
};

int main(){
    bool salir = false;
    int opcion;

    do{
        std::cout << "\nQue desea realizar?\n" << std::endl;
        std::cout << "1) Validar correo electronico\n" << std::endl;
        std::cout << "2) Salir\n" << std::endl;
        std::cin >> opcion;

        switch (opcion){
        case CORREO:
            ValidarEmail correo;
            correo.validarCorreo();
            break;
        
        case SALIR:
            salir = true;
            break;

        default:
            break;
        }
    }
    while(!salir);
    
}