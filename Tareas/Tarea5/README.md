# Tarea 5
-  Curso IE0217
- Profesor Esteban Badilla
- Santiago Herra Castro C13721

### Documentancion en Netlify


### Ejecucion del programa 
Primero asegurese de estar en la carpeta **src**. Despues en la terminal shell ingrese el comando.
```
g++ -o ejecutable.exe main.cpp 
```
Esto le compilara el archivos para crearle el ejecutable **ejecutable.exe**. Para ejecutar el programa ingrese el comando.
```
./ejecutable.exe
```

### Parte teorica.

**1. ¿Qué es una expresión regular y cuál es su propósito en programación?** 

Una expresion regular representa un patron utilizado para buscar y manipular cadenas de texto de una manera mas    flexible y poderosa. Su proposito es realizar busquedas de patrones dentro de texto y poder manipularlas segun sea el proposito.

**2. ¿Qué significan los caracteres especiales . y * en una expresión regular?**  

El caracter especial **.** representa cualquier caracter, excepto una linea de salto y el caracter especial * representa cero o mas repeticiones del elemento anterior.

**3. ¿Cómo se pueden agrupar subexpresiones en una expresión regular?**

Se pueden agrupar subexpresiones en una expresion regular usando los grupos **()**, de esta manera se pueden aplicar los caracteres especiales a los grupos deseados.

**4. ¿Qué función cumple la barra invertida \\ en una expresión regular?**  

La barra invertida cumple la funcion de decirle al programa que se quiere utilizar un caracter especial como objeto de busqueda, por ejemplo, si se quiere buscar el caracter . se debe de utilizar la barra invertida.

**5. Explique cómo se pueden capturar coincidencias usando paréntesis en una expresión regular.**  

Se pueden capturar coincidencias agrupando un grupo de caracteres y usando el caracter especial ^.

**6. ¿Cuál es la diferencia entre \\d y \\D en una expresión regular?**  

Se utiliza el caracter especial \d para poder coincidir un digito es una expresion regular mientras que \D es utilizado para no coincidir con digitos.

**7. ¿Cómo se representa una clase de caracteres en una expresión regular?**  

Se puede representar una clase de caracteres usando [], de esta manera se representan para su dicho uso.

**8. ¿Cuál es el propósito del modificador $ en una expresión regular?**  

El caracter de tipo $, es de tipo ancla y es utilizado para marcar el final de un grupo de caracteres.

**9. Describa cómo validar una dirección de correo electrónico usando expresiones regulares en C++.**  

Afortunadamente, validar un correo e c++ es muy facil con el uso de librerias como regex, en esta se puede realizar una funcion que verifique el patron de direccion de correo electronico y esta devuelve un booleano si se comprueba que es valida. La verificacion se realiza con la forma: R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)"

**10. Discuta las implicaciones de rendimiento de utilizar expresiones regulares en aplicaciones de software. ¿Qué técnicas se pueden aplicar para optimizar una expresión regular compleja, especialmente en contextos donde el tiempo de ejecución es crítico?**  

Una expresion regular comleja puede consumir muchos recursos del programa debido a que esta usualmente posee cadenas de caracteres muy largas y muchas cuantificaciones ambiguas (.* o .+) haciendo que el programa tenga que realizar multiples analisis para poder encontrar una coincidencia o ninguna. Las maneras de reducir este uso de recursos para expresiones regulares complejas es evitando cuantificaciones ambiguas como .* o .+, utilizando caracteres de anclaje para detonar cuando comienza y termina el analisis y hasta el uso de diferentes tipos de compiladores los cuales se enfocan en el analisis de texto.

**11. ¿Qué es un Makefile y cuál es su función en un proyecto de C++?**  

Un Makefile es un archivo que simplifica y ayuda a decidir que parte del programa se deben de compilar. Esto es muy util cuando se tiene un programa muy grande.

**12. ¿Cuál es la diferencia entre una regla implícita y una regla explícita en un Makefile?**  

Las reglas explícitas en un Makefile especifican exactamente cómo construir un objetivo (target) particular y sus dependencias. Estas reglas son definidas directamente por el usuario y se escriben específicamente para crear un archivo o conjunto de archivos determinados. Las reglas implícitas son reglas generalizadas que permiten a make inferir cómo construir un archivo basado en su nombre y extensión, sin que se especifique explícitamente en el Makefile para cada archivo individual. 

**13. Explique el propósito de las macros (variables) en un Makefile.**  

En los Makefiles, las macros son más comúnmente llamadas variables. Estas variables se utilizan para almacenar valores que se pueden reutilizar en todo el Makefile. Son muy útiles para simplificar la gestión de los Makefiles y hacerlos más mantenibles y legibles. Estas variables pueden almacenar comandos, rutas de archivos, opciones de compilador, nombres de directorios y otros valores que se usan frecuentemente a lo largo del Makefile.

**14. ¿Qué es un objetivo (target) en un Makefile y cómo se define?**  

Un target en un Makefile representa generalmente un archivo que se necesita construir o generar a partir de otros archivos, que son sus dependencias. 

**15. ¿Por qué es útil dividir un proyecto de C++ en múltiples archivos fuente y cómo ayuda el uso de Makefiles en este enfoque?**  

Es util dividir un proyecto en diferentes archivos gracias que cuando se tiene que compilar el proyecto durante su revision, si se realizan cambios en el codigo no se tiene que volver a compilar todos los archivos solo en los que se realizaron cambios, asi disminuyendo los recursos utilizados y el tiempo de compilacion.

**16. ¿Cómo se pueden definir dependencias entre los archivos fuente en un Makefile?**  

Las dependencias se pueden definir cuando se definen los targets, de esta manera el makefile sabe cuales archivos representan las dependencias.

**17. Explique cómo se puede compilar un proyecto en diferentes sistemas operativos usando un solo Makefile.**  

Se puede realizar teniendo un makefile donde si detecta que sistema operativo se esta usando, cambia de parametros para que dependiendo del sistema operativo se puedan utilizar los mismos comandos y el makefile si funcione.

**18. ¿Cuál es el propósito de los comandos clean y all en un Makefile?**  

El proposit de el comando all es compilar todos los archivos fuente y el comando clean es borrar todos los archivos ejecutables realizados por el comando all.

**19. Describa cómo se pueden pasar argumentos desde la línea de comandos a un Makefile.**  

Para poder pasar argumentos desde la linea de comandos en un makefile, se debe de modificar el compilador para poder sobreescribir la ejecucion del programa segun se desee para poder agregar los argumentos en el momento de ejecucion.

**20. Proporcione un ejemplo de una regla en un Makefile que compile un archivo fuente .cpp a un archivo objeto .o** 
 
Un ejemplo de una regla en makefile que compile un archivo fuente .cpp a un archivo de objeto es:
```
# Definición de las variables del compilador y las banderas de compilación
CXX := g++
CXXFLAGS := -Wall -O2

# Lista de archivos fuente
SOURCE := main.cpp matriz.cpp

# Convertir los nombres de los archivos fuente a archivos objeto
OBJS := $(SRCS:.cpp=.o)

# Regla por defecto
all: programa

# Enlazar los archivos objeto en el ejecutable final
programa: $(OBJS)
	$(CXX) $(OBJS) -o $@

# Compilar archivos fuente .cpp a archivos objeto .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -f $(OBJS) programa
```

### Parte teorica -Makefile

**1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?**  

La variable CC, contiene el tipo compilador que se utilizara para compilar. La variable CFLAGS, contiene las bandera de compilacion que se utilizaran, esto enfocado en la optimizacion del compilador. La variable CXXFLAGS, es parecido a CFLAGS pero da las banderas en compilacion de manera general. La variable LDFLAGS, indica las opciones que tendra el enlazador para indicar rutas entre librerias.

**2. ¿De qué se compone una regla en un Makefile?**  

Las reglas son compuestas de targets, listas de dependencias y comandos para construir el target.

**3. Defina qué es un target y cómo se relaciona con sus prerequisitos.**  

Los targets son los resultados que se desean obtener al ejecutar un makefile.

**4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?**  

La bandera -I se utiliza para agregar headers adicionales al compilador, la bandera -c se utiliza para compilar un archiov fuente pero sin enlace, haciendo que el resultado sea un archivo de tipo objeto y por ultimo, la bandera -o, hace que el ejecutable tenga un nombre en especifico.

**5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?**  

Las variables se definen mediante la definicion de ellas y se le agrega **:**, el resto del codigo sera la descripcion de variable. Las variables se utilizan mediante el caracter $, esto para poder modificar las variables como se desee en el makefile, por ejemplo, si se desean agregar archivos fuentes, solo se debe de modificar la variable en vez de todo el makefile.

**6. ¿Qué utilidad tiene un @ en un Makefile?**  

El carcter @ posee la utilidad de hacer que no se impriman los comandos ejecutados en la consola. Es meramente estetico.

**7. ¿Para qué se utiliza .PHONY en un Makefile?**  

El .PHONY indica que ciertos nombres de targets no representan archivos, cuando se marca un archivo como PHONY se indica que este siempre debe de ser ejecutado.



