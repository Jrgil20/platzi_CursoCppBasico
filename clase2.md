# Clase 2: Código fuente, código objeto y código ejecutable

Como es de suponer, la programación consiste en escribir programas. Los programas son procedimientos que, al ejecutarse de forma secuencial, se obtienen unos resultados. En muchos sentidos, un programa es como una receta de cocina: una especificación secuencial de las acciones que hay que realizar para conseguir un objetivo. Cómo de abstractas sean estas especificaciones es lo que define el nivel de abstracción de un lenguaje.

Los programas se pueden escribir directamente en código ejecutable, también llamado código binario o código máquina. Sin embargo, el nivel de abstracción tan bajo que ofrecen estos lenguajes haría imposible que muchos proyectos actuales pudieran llevarse a cabo. Este código es el que entiende la máquina donde se va a ejecutar el programa y es específico de la plataforma. Por ejemplo, máquinas basadas en la arquitectura PC no ofrecen el mismo repertorio de instrucciones que otras basadas en la arquitectura PPC o ARM. A la dificultad de escribir código de bajo nivel se le suma la característica de no ser portable.

Por este motivo se han creado los compiladores. Estos programas traducen código fuente, programado en un lenguaje de alto nivel, en el código ejecutable para una plataforma determinada. Un paso intermedio en este proceso de compilación es la generación de código objeto, que no es sino código en lenguaje máquina al que le falta realizar el proceso de enlazado.
 
El proceso de transformación de código fuente a código ejecutable se conoce como "build". Este proceso generalmente incluye varias etapas:

1. **Preprocesamiento**: En esta etapa, el preprocesador realiza sustituciones de macros y otras directivas de preprocesador en el código fuente.
2. **Compilación**: El compilador traduce el código fuente preprocesado a código objeto, que es código en lenguaje máquina incompleto.
3. **Enlazado**: El enlazador toma uno o más archivos de código objeto y los combina para crear un archivo ejecutable completo. Durante este proceso, se resuelven las referencias a funciones y variables externas.

El resultado final del proceso de build es un archivo ejecutable que puede ser ejecutado directamente por la máquina.
El **linker** o enlazador es una herramienta crucial en el proceso de construcción de un programa. Su función principal es tomar los archivos de código objeto generados por el compilador y combinarlos en un solo archivo ejecutable. Durante este proceso, el linker resuelve todas las referencias a funciones y variables que están distribuidas en diferentes archivos de código objeto. Además, el linker puede incluir bibliotecas externas necesarias para el programa.

Una vez que el archivo ejecutable ha sido creado, puede ser ejecutado directamente por la máquina. Al ejecutar el programa, el sistema operativo carga el archivo ejecutable en la memoria y comienza a ejecutar las instrucciones secuenciales que contiene. Este proceso de ejecución es lo que permite que el programa realice las tareas para las que fue diseñado.

### Carga y Ejecución del Programa

Cuando un programa es ejecutado, el sistema operativo realiza varios pasos para cargarlo en la memoria y comenzar su ejecución:

1. **Carga del Programa**: El sistema operativo lee el archivo ejecutable desde el almacenamiento (disco duro, SSD, etc.) y lo carga en la memoria RAM. Esto incluye cargar las instrucciones del programa y los datos necesarios para su ejecución.
2. **Configuración del Entorno de Ejecución**: El sistema operativo configura el entorno de ejecución del programa, lo que incluye asignar espacio en memoria para las variables globales, la pila (stack) y el montón (heap).
3. **Transferencia de Control**: Una vez que el programa está completamente cargado y el entorno de ejecución está configurado, el sistema operativo transfiere el control al punto de entrada del programa (generalmente la función `main` en muchos lenguajes de programación).
4. **Ejecución del Programa**: El procesador comienza a ejecutar las instrucciones del programa de manera secuencial. Durante la ejecución, el programa puede realizar llamadas al sistema operativo para realizar tareas como entrada/salida, gestión de memoria, etc.

Este proceso de carga y ejecución es fundamental para que el programa