# Tarea 1
-  Curso IE0217
- Profesor Esteban Badilla
- Santiago Herra Castro C13721

### Ejecucion del programa ahorcado.
Primero asegurese de estar en la carpeta **src**. Despues en la terminal shell ingrese el comando.
```
g++ -o ahorcado.exe main.cpp ahorcado.cpp
```
Esto le compilara el archivos para crearle el ejecutable **ahorcado.exe**. Para ejecutar el programa ingrese el comando.
```
./ahorcado.exe
```
##  Parte Teorica:

1. **¿Cuál es la principal diferencia entre C y C++?**

    La principla diferencia entre C y C++, es la programacion orientada a objetos. Haciendo posible polimorfismo y herencia gracias a las clases.

2. **Explique el propósito y el uso de los siguientes comandos de Git: git init, git add, git commit, git push, git pull, git clone, git branch, git merge.**

    *git init*: Inicia un nuevo repositorio Git desde el repositorio local.

    *git add*: Agrega cambios en el repositorio local para definir y analizar los cambios.

    *git commit*: Guarda los cambios en el repositorio local.

    *git push*: Envía los cambios locales al repositorio remoto.

    *git pull*: Obtiene y actualiza los cambios realizados en el repositorio remoto en el repositorio local.

    *git clone*: Clona un repositorio remoto en un nuevo directorio local para poder tener el repositorio local.

    *git branch*: Muestra, crea o elimina ramas dentro del repositorio local.

    *git merge*: Fusiona cambios de una rama a otra, usualmente en la rama master.

3. **¿Qué es Git y cuál es su propósito en el desarrollo de software?**

    Git es un sistema de control de codigo/software en equipo. Haciendo posible el trabajo el equipo y la direccion de proyectos en software.

4. **¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?**

    Un conflicto de fusion sucede cuando no se pueden fusionar ramas deido a discrepancias entre estas haciendo que se tengan que resolver de manera manual decidiendo cual predomina entre estas en las zonas de conflicto.

5. **¿Qué es un archivo .gitignore y para qué se utiliza?**

    Un archivo .gitignore es un archivo de configuracion utilizado en Git para poder especificar que archivos deben de ser ignorados cuando se hacen cambios en los repositorio o archivos. Esto para poder saber cuales tipos de archivos son de importancia.

6. **¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?**

    La solicitud de extraccion es el pedido que hacen colaboradores de un repositorio para poder pasar cambios realizados en un rama a la rama principal de manera permanente, una persona a cargo revisa los cambios hechos y decide si se hace el merge.

7. **¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.**

    Las diferencias principales entres estos tipos de lenguajes es el procesamiento de instruccion y velocidad de ejecucion. El lenguaje compilado como C++ se debe de compilar antes de su ejecucion lo que afecta su velocidad de uso, el lenguaje interpretado no se debe de compilar haciendolo mas rapido hasta cierto punto debido que el lenguaje compilado tiene mayor versatilidad en manejo de recursos haciendolo optimizable. Un ejemplo donde el lenguaje compilado es util es en videojuegos pero en paginas web es mas util el lenguaje interpretado.

8. **Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**

    Un linker es la herramientas que hace conexcion con bibliotecas o archivos en la etapa del compilacion. Su funcion es procesar simbolos y referencias hechas en la compilacion.

9. **Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.**

    - Modificar archivos en el repositorio local (generar una rama es opcional)
    - Agregar los cambios a la etapa de revision *git add*.
    - Confirmar los cambios haciendolos definitivos *git commit*.
    - Enviar los cambios al repositorio remoto *git push*.

10. **Defina qué significa inicializar y declarar una variable.**

    Inicializar una variable es describir el tipo, el nombre y el valor que tendra la variable, ejemplo:
    ```
    int x = 5;
    ```
    Declarar la variable es darle solo el tipo y nombre para poder darle el valor mas adelante, ejemplo:
    ```
    int x;
    ```

11. **¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**

    La sobrecarga de funciones es sobreescribir una funcion que esta por defecto en el sistema para poder ajustarla a la necesidad que se tiene en el programa, un ejemplo donde es utilizada es cuando se trabaja con clases.

12. **¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**

    Un puntero es una variable que almacena una direccion de memoria de otra variable, se utiliza de la siguiente manera. Se utiliza para acceder y manipular la variable a la cual se le tiene el puntero. Por ejemplo es como un mapa del tesoro (el puntero) y el tesoro (la variable a al cual se le tiene el puntero).

13. **¿Qué es un branch (rama) en Git y cómo se utiliza?**

    Una rama es una linea de desarrollo aparte de la rama principal donde se pueden hacer cambios para poder revisarlos con los colaboradores. Se utiliza con el comando *git branch*.

14. **¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?**

    La diferencia principal entre estos es que el bucle do-while se ejecuta una vez primero de incondicionalmente de su condicion de bucle mientras que el bucle while depende siempre de su condicion.

15. **Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.**

    Orden principalmente, cuando se trabaja en proyectos grandes, es necesario separar las etapas del proyecto segun archivos. 

    - El .hpp, contiene las declaraciones de las variables, funciones, clases proporcionando los encabezados para los codigos fuentes.
    - El .cpp, contiene las definiciones de las clases y funciones declaradas en el .hpp.
    - El main.cpp, es la entrada del programa donde se unen las aplicaciones y definiciones de las funciones y clases.

16. **¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.**

    la diferencia entre las variables locales y globales es la vida util que poseen y el lugar de almacenamiento. Las variables locales existen solo en un scope determinado y pequeño mientras que las globales son utilizadas en todo el prograa teniendo un scope mayor y vida util larga.

17. **¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**

    El parametro por valor solo genera una copia de la variable pasada, sus cambios solo tienen efecto dentro del scope seleccionado. El parametro por referencia permite acceder y modificar los valores fuera de su scope. El parametro por puntero hace lo mismo que el puntero pero con diferentes sintaxis.

18. **Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.**

    Se usa un puntero para apuntar un arreglocuando se quieren modificar el valor dentro del arreglo, accediendo al primero valor de memoria del arreglo. La forma de acceder a todos los datos seria mediante un bucle, cambiando el valor del indice cuando sea necesario:
    ```
    arreglo[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        //codigo...
        arreglo[i] // Accediendo a valores dentro del arreglo
        //codigo...
    }
    ```

19. **Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.**

    Los punteros dobles son beneficiosos en ocaciones cuando tengamos que modificar valores dentro de un puntero, esto puede ser util cuando estamos trabajando con matrices dinamicas. Debido a como se estructura la matriz, al manipular sus valores de columnas y filas necesario el uso de punterso dobles.

20. **¿Para qué se utiliza la directiva #ifndef?**

    La directiva #ifndef, es utilizada para prevenir la creacion multiple de encabezados en el desarrollo de un programa.

21. **¿Qué es el puntero this en C++?**

    El puntero this, es un tipo de variable utilizada para especificar funciones o clases en las que se esta trabajando, utilizada para poder eliminar ambiguedad entre funciones y clases.

22. **¿Cuál es la diferencia entre un arreglo y una lista en C++?**

    La diferencia en un arreglo y una lista en C++ es la versatibilidad en el tamaño de las dos. El arreglo tiene un tamaño y tipo de variable fijo mientras que la lista no.

23. **¿Investigue qué es un memory leak?**

    Un memory leak es un fenomeno que pasa cuando se etsa corriendo un programa haciendo que se acumule memoria en el dispositivo haciendo que el rendimiento disminuya o el programa se cierre. Puede pasar por no tener manejo de memoria dentro del programa.




