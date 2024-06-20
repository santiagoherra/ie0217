#ifndef BDMANAGER_HPP
#define BDMANAGER_HPP

class BDManager{

    public:

        int menu();

        void crear(const std::string& sigla, const std::string& nombre, int semestre, int creditos, const std::string& descripcion);

        void leer();

        void actualizar(int cursoID, const std::string& descripcion, const std::string& dificultad);

        void eliminar(const std::string &sigla);

    private:
        sql::mysql::MySQL_Driver *driver;
        sql::Connection *con;

    
};


#endif