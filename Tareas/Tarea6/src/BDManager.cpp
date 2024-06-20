#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
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

    return 0;

    
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
    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }

}

void BDManager::leer(){
    try {
        sql::Statement *stmt = con->createStatement();
        sql::ResultSet *res = stmt->executeQuery("SELECT * FROM Cursos");
        while (res->next()) {
            std::cout << "CursoID = " << res->getInt("CursoID")
                      << ", Sigla = " << res->getString("Sigla")
                      << ", Nombre = " << res->getString("Nombre")
                      << ", Semestre = " << res->getInt("Semestre")
                      << ", Creditos = " << res->getInt("Creditos")
                      << ", Descripcion = " << res->getString("Descripcion")
                      << std::endl;
        }
        delete res;
        delete stmt;
    } catch (sql::SQLException &e) {
       std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }
}

void BDManager::actualizar(int cursoID, const std::string& descripcion, const std::string& dificultad){
    try {
        sql::PreparedStatement *pstmt = con->prepareStatement("UPDATE Cursos SET Descripcion = ?, Dificultad = ? WHERE CursoID = ?");
        pstmt->setString(1, descripcion);
        pstmt->setString(2, dificultad);
        pstmt->setInt(3, cursoID);
        pstmt->execute();
        delete pstmt;
    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }
}

void BDManager::eliminar(const std::string &sigla){
    try {
        sql::PreparedStatement *pstmt = con->prepareStatement("DELETE FROM Cursos WHERE Sigla = ?");
        pstmt->setString(1, sigla);
        pstmt->execute();
        delete pstmt;
    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }
}

