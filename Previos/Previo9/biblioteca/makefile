#Nombre programa
TARGET= gestion_biblioteca.exe

#Objetivo predeterminado
all:$(TARGET)

#Compilador

CXX= g++

#Opciones de compilacion

CXXFLAGS= -Wall -std=c++11

#Lista de Archivos

SOURCES= libro.cpp biblioteca.cpp main_biblioteca.cpp

#Lista de archivos objeto generados a partir de los archivos fuente

OBJECTS= $(SOURCES:.cpp=.o)

#Regla para compilar los archivos
%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#Regla para compilar

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

#Regla para limpiar

.PHONY: clean

clean:
	rm $(TARGET) $(OBJECTS)

