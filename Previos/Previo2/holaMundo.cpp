#include <iostream>

int main() {
    std::cout << "Hola Mundo, estudiantes de IE0217!\n";

    int var1 = 1;
    int var2 = 2;
    int var3 = 3;


    switch (var1){
        case 1:
            std::cout << "case 1!\n";
            break;
        
        case 2:
            std::cout << "case 2!\n";
            break;

        case 3:
            std::cout << "case 3!\n";
            break;

        default:
            break;
    }
    return 0;
}