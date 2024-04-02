#include <iostream>
#include <fstream>

class Archivo {
    private://tipo de datos
        std::fstream archivo;

    public:
        Archivo(std::string nombre_archivo) {
            archivo.open(nombre_archivo, std::ios::in | std::ios::out | std::ios::app);
            if (!archivo.is_open()) {//constructor para abrir el archivo inicila
                std::cout << "No se pudo abrir el archivo " << nombre_archivo << std::endl;
            }
        }

        ~Archivo() {// se destruye el constructor porque no se volva a usar asi libera memoria
            if (archivo.is_open()) {
                archivo.close();
            }
        }
};

int main() {
    Archivo mi_archivo("datos.txt");


        
    return 0;
}