# Tarea 3
-  Curso IE0217
- Profesor Esteban Badilla
- Santiago Herra Castro C13721

### Ejecucion del programa 
Primero asegurese de estar en la carpeta **src**. Despues en la terminal shell ingrese el comando.
```
g++ -o ejecutable.exe main.cpp .cpp
```
Esto le compilara el archivos para crearle el ejecutable **ejecutable.exe**. Para ejecutar el programa ingrese el comando.
```
./ejecutable.exe
```

### Parte teorica.

   **1. ¿Qué es un algoritmo y cuáles son sus características principales?**

   Un algoritmo es una secuencia de insturcciones definidas para poder realizar una instruccion. Sus caracteristicas principal son su precision en la definicion de entradas y salidas y general (no solo escrito en lenguaje de programacion).

   **2. Explica la diferencia entre un algoritmo eficiente y uno ineficiente.**

 La diferencia entre un algoritmo eficiente y uno ineficiente es la gestion de recursos disponibles al ejecutar el algoritmo. Cuando se habla de resursos se refiere a tiempo y memoria.

   **3. ¿Qué es una estructura de datos y por qué son importantes?**

   Una estructura de datos es un tipo de almacenamiento que se utiliza para poder guardar todo tipo de datos y poder organizarlos.

   **4. Describe las diferencias entre una estructura de datos estática y una dinámica.**

Las estructuras de tipos de datos estaticas y dinamica son de tipo linear y las diferencias entre ellas son su cambio de tamaño en el tiempo de ejecucion. La estatica no puede cambiar de tamaño en el tiempo mientras que la dinamica si.

   **5. ¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como C++, explique las operaciones que se pueden realizar?**

La memoria dinamica es la seccion de memoria que se puede manipular dentro de su ejecucion, en esta seccion se pueden realizar operaciones como **new** o **delete** para crear  liberar bloques de memoria en su ejecucion.

   **6. ¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la memoria estática?**

Las ventajas de la memoria dinamica: flexibilidad en memoria, efiencia en el uso de la memoria y maleabilidad a cambios en su uso dentro del programa. Por otro lado, las desventajas son fragmentacion de la memoria dentro del programa, esto puede suceder por la asignacion y liberacion de bloques de memoria. Riesgo a fugas de memoria o memory leaks.

   **7. Explique qué es un árbol binario y cuáles son sus principales características.**

Un arbol binario es como una lista enlazada pero la diferencia es que cada nodo padre solo puede tenern como maximo 2 hijos o ramas que provienen de el.

   **8. ¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?**

   Una cola es un tipo de estructura de dato, con la propiedad llamada FIFO (First In, First Out), esta explique el orden en que entran y salen los datos dentro de la cola, el primero que entra es la primero en salir. Un ejemplo de su uso es el de una lista con el orden de impresion de documentos.

   **9. ¿Cuál es la diferencia entre una cola (queue) y una pila (stack)?**

La diferencia entre una cola y una pila es el orden de las salidas y las entradas. La pila usa LIFO (Last In, First Out), el ultimo que entra es el primero que sale y la cola usa FIFO (First In, First Out), el primero que entra es el primero en salir.

   **10. Describe cómo funciona el algoritmo de inserción (insert) en una tabla hash.**

La algoritmo de insercion funciona agregando un dato en la tabla hash, agregando una llave que hace referencia a este dato. 

   **11. ¿Qué es la función de dispersión (hash function) y por qué es importante en las tablas hash?**

La funcion de dispersion es una funcion que convierte una llave numeric o alfanumerica en un numero integer utilizada como indice en la tabla hash.
https://www.geeksforgeeks.org/hash-functions-and-list-types-of-hash-functions/

   **12. ¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien implementada?**

La complejidad temporal promedio de busqueda en una tabla has es O(1) es decir, es constante.

   **13. Explica cómo se realiza la operación de inserción (push) en una pila (stack).**

La operacion de insercion o push sirve para poder agregar un dato a la posicion superior de la pila, esto claro si existe espacio para este dato.

   **14. ¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop) en una pila?**

La complejidad temporal es igula debido que el proceso es al mismo valor, el suprior de la pila, entonces es igual.

   **15. Describe cómo funciona una lista enlazada y cuáles son sus ventajas y desventajas.**

Las listas enlazadas estructura de datos llamadas nodos que tiene como propiedad a ellas mismas haciendo un enlace entre estructuras de datos.

   **16. ¿Qué es un nodo en una lista enlazada y qué contiene?**

Un nodo es una estructura de dato, el cual tiene como propiedad un enlace a otra estructura de dato que tambien es un nodo, puede tener enlace definido o no pero si tiene la posibilidad de enlazar.

   **17. ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente enlazada?**

La diferencia entre la lista enlazada simple y la doblemente enlazada es la cantidad de enlaces que poseen los nodos de las listas. El enace sencillo se generado para poder ir hacia una sola direcccion mientras que el doblemente enlazado tiene la posibilidad de poder ir en 2 direccion, hacia adelante y hacia atras.

   **18. ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?**

Realizar la eliminacion de un nodo conlleva la actualiza de la lista debido al nodo faltante en la lista. Si el nodo es la cabecedera de la lista, se debe de cambiar el puntero de la cabeza por el siguiente nodo. Si el nodo esta en el medio, se debe de cambiar el puntero del siguiente nodo para que se sepa quien va despues. Por ultimo, si el nodo es el ultimo, se debe de cambiar el antepnultimo indicando que el siguiente nodo es nulo.

   **19. Explica cómo funciona el algoritmo de recorrido (traversal) en un árbol binario.**

El algoritmo de recorrido (transversal) se divide en 3 recorridos, cada uno con el mismo objetivo pero diferentes tecnica. El algoritmo de recorrido esta hecho para poder recorrer cada nodo dentro de un arbol binario. Los tipos de recorridos son: Preorden, Postorden y Preorden.

   **20. ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden en un árbol binario balanceado?**

La complejidad temporal entre los recorridos preorden, postorden y inorden son la misma debido que lo que cambia es el orden en que visitan los nodos.

   **21. Explique la diferencia entre la notación Big O (O) y la notación Omega () en el análisis de la complejidad temporal de los algoritmos. Proporciona un ejemplo de un algoritmo y determina su complejidad temporal utilizando ambas notaciones Big O y Omega.**

La diferencia entre la notacion Big O y Omega es el enfoca en el analisis de los resultados de un algoritmo, el Big O, representa el limite superior del tiempo de ejecucion, dando la complejidad del peor de los casos de un algoritmo. El omega, representa el limite inferior del tiempo de ejecucion, dando la complejidad del mejor de los casos de un algoritmo. Por ejemplo si se tuviera que adivinar un numero del 1 al 10, el Big O seria 10, y el Omega seria 1, dando el peor y mejor caso respectivamente.
