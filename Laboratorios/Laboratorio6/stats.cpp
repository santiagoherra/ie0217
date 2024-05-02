#include "stats.hpp"

template <typename T>
Statistics<T>::Statistics(const std::vector<T>& data) : data(data) {
    if (data.empty()) {//Agarra la excepcion si el contenedor esta vacio
        throw std::invalid_argument("La lista de datos debe contener elementos");
    }
}

template <typename T>
double Statistics<T>::mean() const {//Se define el metodo de promedio
    T sum = 0;
    for (const T& value : data) {//Se itera en todos los valores de data
        sum += value;
    }
    return static_cast<double>(sum) / data.size();//Se hace un cast para que sea un double
}

template <typename T>
double Statistics<T>::standardDeviation() const {//Se define el metodo de desviacion estandar
    double meanValue = mean();
    double sumSquares = 0;

    for (const T& value : data) {//Se itera en todos los valores de data para calcular la D.E.
        sumSquares += (value - meanValue) * (value - meanValue);
    }

    return std::sqrt(sumSquares / data.size());
}

// Instanciaciones de los tipos de clases porque se utilizan en diferentes casts, es necesario para que
//el compilador no se confunda
template class Statistics<int>;
template class Statistics<double>;

