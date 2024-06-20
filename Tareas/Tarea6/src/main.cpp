#include "BDManager.hpp"

int main(){
    BDManager manager;

    manager.menu();

    //Eliminar cursos inventados
    manager.eliminar(16);
    manager.eliminar(17);

    //Eliminar cursos existentes para ver el cambio en requisitos
    manager.eliminar(10);
    manager.eliminar(11);

    //Eliminar existente para ver cambios en descripciones
    manager.eliminar(2);
    manager.eliminar(4);

    return 0;
}