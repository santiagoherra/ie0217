#include <iostream>
using namespace std;

#define BOOK_ID_MAX 10

enum casas_t {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
};

int main() {
    // Imprimimos el valor de BOOK_ID
    cout << "El valor de BOOK_ID es: " << BOOK_ID_MAX << endl; //se cambian los valores en el 
    //preprocesamiento

    // Imprimimos la cantidad de casas en el condominio
    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    return 0;
}
