#ifndef BDMANAGER_HPP
#define BDMANAGER_HPP
#include <string>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <cppconn/exception.h>
#include <iostream>

class BDManager{

    public:

        int menu();

        void crear(const std::string& sigla, const std::string& nombre, int semestre, int creditos, const std::string& descripcion);

        void leer(int cursoID);

        void actualizar(int cursoID, const std::string& descripcion, const std::string& dificultad);

        void eliminar(const std::string &sigla);

    private:
        sql::mysql::MySQL_Driver *driver;
        sql::Connection *con;

    
};


#endif