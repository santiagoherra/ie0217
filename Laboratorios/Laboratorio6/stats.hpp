#ifndef STATS_HPP
#define STATS_HPP

#include <vector>
#include <cmath>
#include <stdexcept>

template <typename T>
class Statistics {
public:
    Statistics(const std::vector<T>& data);//Se genera el constructor de la clase para indicar que se tendra
    //un contenedor de tipo vector.

    //Declaracion de la funcion promedio
    double mean() const;

    //Declaracion de la funcion de desviacion estandat
    double standardDeviation() const;

private:
    std::vector<T> data;
};


#endif