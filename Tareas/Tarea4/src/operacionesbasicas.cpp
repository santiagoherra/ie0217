template<typename T>
class OperacionesBasicas {
public:
    bool validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
        return a.filas == b.filas && a.columnas == b.columnas;
    }

    bool validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        return a.columnas == b.filas;
    }

    void suma(Matriz<T> a, Matriz<T>b){
        bool confirmacion = validarSumaResta(a,b);
        if(!confirmacion){
            throw std::invalid_argument("Las dimensiones no permiten la suma")
        }
        Matriz<T> c = a + b;
    }

    void resta(Matriz<T> a, Matriz<T>b){
        bool confirmacion = validarSumaResta(a,b);
        if(!confirmacion){
            throw std::invalid_argument("Las dimensiones no permiten la suma")
        }
        Matriz<T> c = a - b;
    }

    void multiplicacion(Matriz<T> a, Matriz<T>b){
        bool confirmacion = validarMultiplicacion(a,b);
        if(!confirmacion){
            throw std::invalid_argument("Las dimensiones no permiten la suma")
        }
        Matriz<T> c = a * b;
    }
};


