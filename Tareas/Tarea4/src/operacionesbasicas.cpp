template<typename T>
class OperacionesBasicas {
public:
    bool validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
        return a.filas == b.filas && a.columnas == b.columnas;
    }

    bool validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        return a.columnas == b.filas;
    }
};


