#include "BDManager.hpp"

int main(){
    BDManager manager;

    manager.menu();

    manager.leerTodos();

    manager.leerEspecificos(1);

    manager.leerNoOptativos();

    return 0;
}