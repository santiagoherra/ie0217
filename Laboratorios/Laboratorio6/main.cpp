#include <iostream>
#include <stdexcept>
#include "stats.hpp"

int main(){
    try{
        //Se genera el constructor de la lista de tipo int
        std::vector<int> intData = {1, 2, 3, 4, 5};
        Statistics<int> statsInt(intData);

        //Utilizacion de metodos
        std::cout << "Media de intData: " << statsInt.mean() << std::endl;
        std::cout << "Desvicion estandar de intData: " << statsInt.standardDeviation() << std::endl;

        /**************************/

        //Se genera el constructor de la lista de double.
        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};
        Statistics<double> statsDouble(doubleData);

        //Utilizacion de metodos
        std::cout << "Media de doubleData: " << statsDouble.mean() << std::endl;
        std::cout << "Desvicion estandar de doubleData: " << statsDouble.standardDeviation() << std::endl;

        /****************/

        //Genera error porque la lista de elementos esta vacia.
        std::vector<int> emptyData;
        Statistics<int> statsEmpty(emptyData);

    }catch(const std::invalid_argument& e){
        std::cerr << "Exception encontrada: " << e.what() << std::endl;
    }

    return 0;
}
