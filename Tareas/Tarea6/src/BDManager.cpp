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

void BDManager::crear(int cursoID, const std::string& sigla, const std::string& nombre, int semestre, int creditos,
                      const std::string& descripcion, const std::string& dificultad){
    
    if (con == nullptr) {
        std::cerr << "ERROR: No database connection" << std::endl;
        return;
    }

    try {
        // Insertar el nuevo curso
        sql::PreparedStatement *pstmtCurso = con->prepareStatement(
            "INSERT INTO Cursos (CursoID, Sigla, Nombre, Semestre, Creditos) VALUES (?, ?, ?, ?, ?)"
        );
        pstmtCurso->setInt(1, cursoID);
        pstmtCurso->setString(2, sigla);
        pstmtCurso->setString(3, nombre);
        pstmtCurso->setInt(4, semestre);
        pstmtCurso->setInt(5, creditos);
        pstmtCurso->execute();
        delete pstmtCurso;

        // Insertar la descripción del nuevo curso
        sql::PreparedStatement *pstmtDescripcion = con->prepareStatement(
            "INSERT INTO Descripciones (DescripcionID, CursoID, Descripcion, Dificultad) VALUES (?, ?, ?, ?)"
        );
        pstmtDescripcion->setInt(1, cursoID); // Asumiendo que DescripcionID es el mismo que CursoID
        pstmtDescripcion->setInt(2, cursoID);
        pstmtDescripcion->setString(3, descripcion);
        pstmtDescripcion->setString(4, dificultad);
        pstmtDescripcion->execute();
        delete pstmtDescripcion;

        std::cout << "Curso y descripción agregados exitosamente." << std::endl;

    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException in agregarCursoYDescripcion: " << e.what() << std::endl;
    }
}


void BDManager::leerTodos(){
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

void BDManager::leerEspecificos(int cursoID){
    if (con == nullptr) {
        std::cerr << "ERROR: No database connection" << std::endl;
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

void BDManager::leerNoOptativos(){
    if (con == nullptr) {
        std::cerr << "ERROR: No database connection" << std::endl;
    }

    try {
        sql::Statement *stmt = con->createStatement();
        sql::ResultSet *res = stmt->executeQuery("SELECT * FROM Cursos WHERE Sigla NOT LIKE 'IE'");
        
        while (res->next()) {
            std::cout << "CursoID = " << res->getInt("CursoID")
                      << ", Sigla = " << res->getString("Sigla")
                      << ", Nombre = " << res->getString("Nombre")
                      << ", Semestre = " << res->getInt("Semestre")
                      << ", Creditos = " << res->getInt("Creditos")
                      << std::endl;
        }

        delete res;
        delete stmt;
    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException in consultarCursosNoOptativos: " << e.what() << std::endl;
    }
}




void BDManager::actualizarOptativos(int cursoID, const std::string& nombre, int creditos){
    try {
        sql::PreparedStatement *pstmt = con->prepareStatement("UPDATE Cursos SET Nombre = ?, Creditos = ? WHERE CursoID = ?");
        pstmt->setString(1, nombre);
        pstmt->setInt(2, creditos);
        pstmt->setInt(3, cursoID);
        pstmt->execute();
        delete pstmt;
    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }
}

void BDManager::actualizarExistentes(int cursoID, const std::string& descripcion, const std::string& dificultad){
    try {
        sql::PreparedStatement *pstmt = con->prepareStatement("UPDATE Descripciones SET Descripcion = ?, Dificultad = ? WHERE CursoID = ?");
        pstmt->setString(1, descripcion);
        pstmt->setString(2, dificultad);
        pstmt->setInt(3, cursoID);
        pstmt->execute();
        delete pstmt;
    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException: " << e.what() << std::endl;
    }
}

void BDManager::eliminar(int cursoID){
    try {
        //Eliminar el requisito
        sql::PreparedStatement *pstmtRequisito = con->prepareStatement(
            "DELETE FROM Requisitos WHERE RequisitoCursoID = ?"
        );
        pstmtRequisito->setInt(1, cursoID);
        pstmtRequisito->execute();
        delete pstmtRequisito;

        // Eliminar la descripción del curso en Descripciones
        sql::PreparedStatement *pstmtDescripcion = con->prepareStatement(
            "DELETE FROM Descripciones WHERE CursoID = ?"
        );
        pstmtDescripcion->setInt(1, cursoID);
        pstmtDescripcion->execute();
        delete pstmtDescripcion;

        // Eliminar el curso en Cursos
        sql::PreparedStatement *pstmtCurso = con->prepareStatement(
            "DELETE FROM Cursos WHERE CursoID = ?"
        );
        pstmtCurso->setInt(1, cursoID);
        pstmtCurso->execute();
        delete pstmtCurso;


        std::cout << "Curso y su descripción eliminados exitosamente." << std::endl;

    } catch (sql::SQLException &e) {
        std::cerr << "ERROR: SQLException in eliminarCursoYDescripcion: " << e.what() << std::endl;
    }
}
