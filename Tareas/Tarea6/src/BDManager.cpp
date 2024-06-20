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
        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "tato", "HDSkhkdhsafHD1!2@3#");

        con->setSchema("eie");


     }catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
        con = nullptr;
    }

    return 0;

    
}

void BDManager::crear(const std::string& sigla, const std::string& nombre, int semestre, int creditos,
                      const std::string& descripcion){
    
    

    try {
        sql::PreparedStatement *pstmt = con->prepareStatement("INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos, Descripcion)"
                                                                "VALUES (?, ?, ?, ?, ?)");
        pstmt->setString(1, sigla);
        pstmt->setString(2, nombre);
        pstmt->setInt(3, semestre);
        pstmt->setInt(4, creditos);
        pstmt->execute();
        delete pstmt;

    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }

    try{
        sql::PreparedStatement *pstmt = con->prepareStatement("INSERT INTO Descripciones (Sigla, Nombre, Semestre, Creditos, Descripcion)"
                                                                "VALUES (?, ?, ?, ?, ?)");
        pstmt->setString(1, sigla);
        pstmt->setString(2, nombre);
        pstmt->setInt(3, semestre);
        pstmt->setInt(4, creditos);
        pstmt->execute();
        delete pstmt;

    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }

};

void BDManager::leer(int cursoID){
    if (con == nullptr) {
        std::cerr << "ERROR: No database connection" << std::endl;
    }

    try {
        sql::Statement *stmt = con->createStatement();
        sql::ResultSet *res = stmt->executeQuery("SELECT c.CursoID, c.Sigla, c.Nombre, c.Semestre, c.Creditos, d.Descripcion "
            "FROM Cursos c "
            "LEFT JOIN Descripciones d ON c.CursoID = d.CursoID");
        while (res->next()) {
            std::cout << "CursoID = " << res->getInt("CursoID")
                      << "\nSigla = " << res->getString("Sigla")
                      << "\nNombre = " << res->getString("Nombre")
                      << "\nSemestre = " << res->getInt("Semestre")
                      << "\nCreditos = " << res->getInt("Creditos")
                      << "\nDescripcion = " << res->getString("Descripcion")
                      << std::endl;
        }
        delete res;
        delete stmt;
    } catch (sql::SQLException &e) {
       std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }

    try {
        sql::PreparedStatement *pstmt = con->prepareStatement(
            "SELECT c.CursoID, c.Sigla, c.Nombre, r.RequisitoCursoID "
            "FROM Cursos c "
            "JOIN Requisitos r ON c.CursoID = r.CursoID "
            "WHERE c.CursoID = ?"
        );
        pstmt->setInt(1, cursoID);

        sql::ResultSet *res = pstmt->executeQuery();
        while (res->next()) {
            std::cout << "CursoID = " << res->getInt("CursoID")
                      << ", Sigla = " << res->getString("Sigla")
                      << ", Nombre = " << res->getString("Nombre")
                      << ", RequisitoCursoID = " << res->getInt("RequisitoCursoID")
                      << std::endl;
        }

        delete res;
        delete pstmt;
    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException in consultarRequisitos: " << e.what() << std::endl;
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

