# Tarea 3
-  Curso IE0217
- Profesor Esteban Badilla
- Santiago Herra Castro C13721

### Documentancion en Netlify


### Ejecucion del programa 
Primero asegurese de estar en la carpeta **src**. Despues en la terminal shell ingrese el comando.
```
g++ -o ejecutable.exe main.cpp matriz.cpp operacionesbasicas.cpp validadorentrada.cpp
```
Esto le compilara el archivos para crearle el ejecutable **ejecutable.exe**. Para ejecutar el programa ingrese el comando.
```
./ejecutable.exe
```

### Parte teorica.

1. **Definición de Templates:** Explique el concepto de templates en C++ y proporcione un ejemplo simple.

    Un template es una plantilla de codigo que se puede utilizar para la simplificacion en el desarrollo de un programa, es como reutilizar codigo. Un ejemplo es la utilizacion de plantilla de un variable para su uso en una funcion. 

2. **Sobrecarga de Plantillas:** ¿Cómo se realiza la sobrecarga de funciones con plantillas en C++?

    La sobrecarga de funciones se realiza creando mulitpls definiciones de una misma funcion utilizando plantillas pero con diferentes parametros para que la funcion asi tengo diferentes comportamientos.

3. **Plantillas de Clases:** Explique cómo se pueden utilizar plantillas en la definición de clases en C++.

    Las plantillas se puede utilizar para la definir clases para trabajar con distintos tipos de datos. Para esto se debe de crear la una plantilla de tipo clase donde se tiene como argumento de tipo template.

4. **Manejo de Excepciones:** Describa los bloques try, catch y throw y cómo se utilizan para el manejo de excepciones en C++.

    El bloque try es un tipo de bloque secuencial que esta diseñado para encontrar un error dentro del codigo. El bloque cath agarra el error encontrado por el try. El bloque throw se utiliza para poder lanzar una excepcion desde cualquier parte del codigo, es utilizado para poder hacer excepciones personalizadas.

5. **Excepciones Estándar:** Nombre al menos tres excepciones estándar proporcionadas por C++ y proporcione ejemplos de situaciones en las que podrían ser útiles.

    Algunos excepciones comunes en C++ son: std::runtime_error, std::invalid_argument y std::range_error. Estas excepciones son utiles para saber que clase de error se esta cometiendo en la compilacion o ejecucion del codigo. Conocer que tipo de excepcion se esta agarrando hace mas facil poder corregir el error para el programador.

6. **Política de Manejo de Excepciones:** ¿Qué es una política de manejo de excepciones y por qué es importante considerarla al diseñar software?

    La politica de manejo de excepciones son un conjunto de reglas utilizadas para poder asegurarse que las que excepciones se estan manejando de manera adecuada en el desarrollo de software. Estas son importantes para poder definir con exactitud las excepciones y poder manejarlas segun sea la aplicacion del software.

7. **Noexcept:** Explique el propósito de la palabra clave noexcept y cómo se utiliza en C++.

    La palabra clave noexcept es una indicador en funciones u operadores que le indica al compilador que no se lanzara una excepcion cuando se ejecute la funcion o el operador.

8. **Diferencia entre std::logic_error y std::runtime_error:** Explique la diferencia entre las excepciones std::logic_error y std::runtime_error.

    La diferencia entre std::logic_error y std::runtime_error es cuando se tira el error. logic_error se da cuando no se da el resultado querido por el codigo mientras que runtime_error se da cuando se genera un error de logica en la ejecucion, este ultimo es automatico.

9. **Excepción no capturada:** Explique qué ocurre cuando una excepción no es capturada.

    Cuando una excepcion no es capturada el sistema abortaria el programa haciendo que termine y la excepcion se imprimiria en el programa.

10. **Contenedores STL:** Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.

    Algunos contenedores de STL son: 
    1. vector: Son utilizados para mantener una secuencia de datos.
    2. stack: Son utulizados cuando se quiere tener una estructura de tipo stack.
    3. set: Son utilizados cuando se quiere tener valores ordenados dentro del contenedor.
    4. map: Son utilizados cuando se desea tener un diccionario de valores.  
    5. list: Son utilizados cuando se desea agregar todo tipo de datos en un contenedor. 

11. **Iteradores en STL:** Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores.

    Un iterador es como un puntero hecho para apuntar hacia objetos dentro de contenedores, para poder acceder a los objetos se debe de iterar dentro del contenedor mediante un punto de referencia, este puede ser el inicio o el final.

12. **Algoritmos STL:** Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.

    1. find: Busca un elemento en un rango.
    2. count: Cuenta el numero de ocurrencias de un elemento en un rango.
    3. sort: Ordena un rango en orden ascendente.

13. **Algoritmos Personalizados:** ¿Cómo podría utilizar un algoritmo personalizado con la STL?

    Si es posible utilizar algoritmos personalizados con STL, depende de la aplicacion pero mientras se conozca el funcionamiento del STL es posible mezclar los dos enfoques en el programa.

