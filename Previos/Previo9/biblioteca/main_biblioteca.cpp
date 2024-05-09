#include "biblioteca.hpp"

int main(){
    Biblioteca biblioteca;//main de uso de Libro y Biblioteca

    biblioteca.agregarLibro ("El Gran Gatsby", "F.Scott Fitzgerald");
    biblioteca.agregarLibro("1984","George Orwell");

    biblioteca.mostrarCatalogo();

    return 0;
}