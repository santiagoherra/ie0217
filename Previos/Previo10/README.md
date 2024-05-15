# Como ejecutar los archivos de Previo10
Curso: Estructuras abstractas de datos y algoritmos para ingenieria.

En esta carpeta Previo8, estan los codigos de ejemplo de la clase 10. En esta clase se vio la implementacion de la biblioteca wxWidgets con el proposito de implementar interfases graficas a codigos de C++. En esta carpeta estan los diferentes ejemplos que se podian realizar con wxWidgets. Se vieron las implementaciones de controles, tipos de estilos, eventos estaticos y dinamicos, propagacion de eventos, eventos del mouse y eventos de teclado. Se debe de tomar en cuenta que estos archivos fueorn implementados en el sistema operativo GNU Linux Ubuntu.

**Guia para ejecutar archivos en C++**
1. Asegurarse de descargar e instalar la libreria de wxWidgets.
2. Ahora dirijase a la carpeta de Previo10. Dependiendo de donde tiene la carpeta de wxWidgets debe de ingresar la direccion de la carpeta para poder compilar el archivo.

```
g++ `<DIRECCION DE CARPETA DE WXWIDGETS>/wxWidgets-3.2.4/wx-config --cxxflags` -o MyApp MyApp.cpp src/<ARCHIVO.CPP QUE QUIERE COMPILAR> `<DIRECCION DE CARPETA DE WXWIDGETS>/wxWidgets-3.2.4/wx-config --libs`
```
Asegurese de cambiar la informacion en <> segun sea su configuracion. Ademas el comando debe de compilar MyApp.cpp porque es el archivo por decirlo asi, el main.cpp el cual sirve para poder implementar los cambios que se realizaran en los diferente archivos que se tienen. Los archivos que se deben de ver son los de tipo source. Los archivos que se pueden cambiar son los que estan en la carpeta src/ pero el comando esta hecho para que se ejecut en la carpeta Previo10/

3. Ejecutar el ejecutable

```
./MyApp
```

**Ejemplo**

Para el archivo mouse.cpp

```
g++ `home/santiago/Documents/wxWidgets-3.2.4/wx-config --cxxflags` -o MyApp MyApp.cpp src/mouse.cpp `home/santiago/Documents/wxWidgets-3.2.4/wx-config --libs`

./MyApp
```