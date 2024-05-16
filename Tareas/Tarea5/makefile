# Makefile para correo

# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++11
EXEC = correo
SOURCES = src/main.cpp src/correo.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Regla principal: compila y corre el programa
all: build run

# Compila el código fuente y genera el ejecutable
build: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC)

# Cómo construir los objetos individuales de cada fuente
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpia el directorio de archivos compilados y deja únicamente el código fuente
clean:
	rm -f $(OBJECTS) $(EXEC)

# Ejecuta el ejecutable
run: $(EXEC)
	./$(EXEC)

# Añadir esto para que `make` no confunda los nombres de las reglas con archivos
.PHONY: all clean run build

