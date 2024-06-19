#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <cppconn/exception.h>
#include <iostream>
#include "BDManager.hpp"

int BDManager::menu(){
     try {
        // Crear el driver y la conexión
        sql::mysql::MySQL_Driver *driver;
        sql::Connection *con;
        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "tato", "HDSkhkdhsafHD1!2@3#");

        con->setSchema("eie");


     }catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }


 
}

void BDManager::crear(const std::string& sigla, const std::string& nombre, int semestre, int creditos, const std::string& descripcion){
    try {
        sql::PreparedStatement *pstmt = con->prepareStatement("INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos, Descripcion)"
                                                                "VALUES (?, ?, ?, ?, ?)");
        pstmt->setString(1, sigla);
        pstmt->setString(2, nombre);
        pstmt->setInt(3, semestre);
        pstmt->setInt(4, creditos);
        pstmt->setString(5, descripcion);
        pstmt->execute();
        delete pstmt;
}
