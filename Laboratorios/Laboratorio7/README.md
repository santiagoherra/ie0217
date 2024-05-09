# Como ejecutar los archivos de Laboratorio 7
Curso: Estructuras abstractas de datos y algoritmos para ingenieria.

En la laboratorio 7, se vio el tema de makefiles, se realizo un programa para poner aprueba un makefile que lo que hace es reemplazar una linea de texto deseada segun lo que se pida. Para poder utilizar el programa se debe de tener un archivo que para el ejemplo de ejecucion se debe de llamar **input.txt**. 

**Guia para ejecutar archivos en C++**
1. Asegurarse de estar en el archivo de Laboratorio7
2. Utilizar el comando:
```
make all
```

Este comando compilara los archivos del programa y generara un ejecutable que se adapta a la linea de comandos cuando se usa, ya que las instrucciones de ejecucion se dan por linea de comandos.

3. Para utilizar el programa:
```
./bin/textprocessor -f data/input.txt -o data/output.txt -search "foo" -replace "bar"
```

Esto reemplazara "foo" por "bar" en el archivo input.txt en la carpeta data y se tendra el archivo de salida output.txt con los cambios realizados.

4. Para borrar los ejecutables:
```
make clean
```

Esto borrara la carpeta bin.