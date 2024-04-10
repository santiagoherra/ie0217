# Tarea 2
-  Curso IE0217
- Profesor Esteban Badilla
- Santiago Herra Castro C13721

### Ejecucion del programa ahorcado.
Primero asegurese de estar en la carpeta **src**. Despues en la terminal shell ingrese el comando.
```
g++ -o .exe main.cpp .cpp
```
Esto le compilara el archivos para crearle el ejecutable **.exe**. Para ejecutar el programa ingrese el comando.
```
./.exe
```
##  Parte Teorica:
**1. ¿Qué es la programación orientada a objetos y cuáles son sus principales principios?**

La programacion orientada a objetos (POO) es la tecnica de programacion enfocada en definir objeto claves para el flujo de desarrollo del software. Sus principios son abstraccion o enfoque, herencia y polimorfismo.

**2. Explique el concepto de ocultamiento de datos y cómo se logra en C++.**

El ocultamiento de datos es una tecnica que implica restringir el acceso a datos para que estos no sean modificados o cambiados. Los tipos de acceso que hay son: publicos, protegidos y privados. Se logra calificando los datos con estos atributos.

**3. ¿Cuál es la diferencia entre una clase y un objeto en C++?**

La diferencia entre una clase y un objetos es que la clase es el tipo de dato que tiene atributos y metodo y hace referencia a un objeto y el objeto es la instancia o uso de la clase.

**4. ¿Qué es el polimorfismo y cómo se logra en C++?**

El polimorfismo es la capacidad que tiene los objetos de diferentes clases de poseer las mismas caracteristicas pero comportarse de manera diferente, esto se logra con la herencia y derivacion de clases.


**5. ¿Qué significa el término encapsulamiento en el contexto de la OOP?**

El encapsulamiento es la capacidad de tiene las clases de restringir o agrupar tipos de datos en diferentes secciones para su utilizacion previa de manera ordenada.

**6. ¿Cuál es el propósito del constructor y el destructor en una clase de C++?**

El proposito del constructor es proporcionar parametros iniciales a los atributos de una clase y el proposito del destructor es eliminar al construtor despues de su uso cuando este ya no es necesario.

**7. ¿Investigue cómo se define una clase abstracta en C++ y cuál es su función?**

Una clase abstracta es una clase que se considera base para otras y contiene al menos una clase virtual pura. Las clases vrtuales puras se definen como igualandolas a 0.
```
virtual void funcion() = 0;
```
https://www.ibm.com/dcs/es/i/7.5?topic=only-abstrat-classes-c

**8. ¿Investigue qué es un constructor de copia y para qué se utiliza en C++?**

Un constructor de copia es un constructor que inicializa sus valores con los valores de otro constructor de la misma clase, entonces tiene como parametros el contructor que se inicializo antes.

https://www.codingame.com/playgroups/50577/miembros-especiales-de-la-clase-en-c-practica-2/constructores

**9. ¿Investigue qué es el polimorfismo estático y dinámico en C++ y cómo se diferencian?**

El polimorfismo estatico se da la etapa de compilacion y se le conoce como "early binding" que se le atribuye a la sobrecarga de funcione. El polimorfismo dinamico se da en la etapa de ejecucion y se le conoce como "late binding", se da mediante el uso de funciones virtuales.

**10. ¿Qué son las clases anidadas y cuál es su utilidad en C++?**

Las clases anidadadas son clases definidas dentro de otras clases y lo especial de esto es que estas clases definidas dentro de las otras pueden acceder a los datos privados de la clase contenedora.

**11. En el contexto de la programación orientada a objetos en C++, ¿cómo se pueden utilizar los punteros para trabajar con objetos y clases? Explique también por qué los punteros a objetos son útiles en la programación orientada a objetos.**

En el contexto de POO, los punteros son utiles para poder guardar la direccion de memoria de atributos de otras clases haciendo posibles poder interactuar con los metodos y atributos desde diferentes scopes dandole versatibilidad al codigo.

**12. ¿Qué es una función prototipo?**

Una funcion prototipo es la declaracion de una funcion para que el compilador sepa de su existencia y le asigne su debida memoria. 

**13. ¿Explique los diferentes tipos de miembros que existen en la OOP?**

Existen muchos tipos de miembros en POO, estan los atributos y metodos que son como variables internas y funciones internas respectivamente dentro de una clase. Estan tambien los constructores y destructores que son como los valores iniciales y los destructores de valores iniciales respectivamente dentro de una clase.

**14. ¿Qué es un memory leak?**

Memory leak es la acumulacion de memoria dentor de un programa y puede generar que retraso en el programa y que el programa se detenga .

**15. ¿Qué es y cuál es la importancia de la Herencia multinivel, múltiple y jerárquica de C++?**

La importancia de la herencia multinivel, multiple y jerarquica es:

1. Multinivel: Genera una cadena sin fin de herencia teniendo una por decir plantilla de objetos.

2. Multiple: Hace posible la herencia de diferentes clases bases.

3. Jerarquia: Se refiere a la creacion de multiples clases derivadas de un amisma clase base.


**16. ¿Qué es la composición y cómo se implementa en C++?**

La composicion es un concepto utilizado que pasa cuando se tiene como miembros de una clase un objeto de otra clase.

**17. ¿Qué es la sobreescritura de funciones en C++ y cuándo es bueno usarla?**

La sobreescritura de funciones es como suena, sobreescribir las funciones de una clase para poder redefinir la funcion cuando se desee.

**18. ¿Qué es un método y un atributo y cuál es la diferencia entre ellos?**

Un metodo es como una funcion interna de una clase y un atributo es una variable interna. 

**19. ¿Qué es el constructor y el destructor en una clase?**

El constructor son como las variables iniciales de una clase y el destructor es lo que elimina el constructor.

**20. ¿Qué es la sobrecarga de operadores en C++ y cómo se utiliza?**

La sobrecarga de operadores es redefinir un operador para poder darle significa para el uso de objetos. Se utiliza como una funcion.