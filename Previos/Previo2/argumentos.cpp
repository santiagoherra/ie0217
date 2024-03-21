#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Número de argumentos: " << argc << std::endl;
    std::cout << "Nombre del programa: " << argv[0] << std::endl;

    // Imprimir argumentos adicionales si existen
    if (argc > 1) {
        std::cout << "Argumentos adicionales:" << std::endl;
        for (int i = 1; i < argc; ++i) {
            std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
        }
    }

    return 0;
}
