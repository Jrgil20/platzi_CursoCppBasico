# Clase 7: Variables en C++

## ¿Qué es una variable?
Una variable es un espacio en la memoria del ordenador que se utiliza para almacenar un valor que puede cambiar durante la ejecución del programa.

## Cómo crear variables en C++
Para declarar una variable en C++, se debe especificar el tipo de dato seguido del nombre de la variable. Aquí hay algunos ejemplos:

```cpp
int edad; // Declaración de una variable entera
float altura; // Declaración de una variable de punto flotante
char inicial; // Declaración de una variable de carácter
```

También se pueden inicializar las variables al mismo tiempo que se declaran:

```cpp
int edad = 25; // Declaración e inicialización de una variable entera
float altura = 1.75; // Declaración e inicialización de una variable de punto flotante
char inicial = 'J'; // Declaración e inicialización de una variable de carácter
```

## Buenas prácticas al nombrar variables
1. **Nombres descriptivos**: Utiliza nombres que describan claramente el propósito de la variable.
    ```cpp
    int numeroDeEstudiantes;
    float salarioMensual;
    ```

2. **Notación camelCase**: Comienza con una letra minúscula y usa mayúsculas para separar palabras.
    ```cpp
    int numeroDeEstudiantes;
    float salarioMensual;
    ```

3. **Evita nombres de una sola letra**: A menos que se utilicen en bucles o contextos muy limitados.
    ```cpp
    for (int i = 0; i < 10; i++) {
         // Uso de 'i' es aceptable en este contexto
    }
    ```

4. **No usar palabras reservadas**: Evita usar palabras que tienen un significado especial en C++.
    ```cpp
    // Incorrecto
    int int;
    float float;
    ```

## Ejemplos de variables en uso

```cpp
#include <iostream>
using namespace std;

int main() {
     int edad = 30;
     float altura = 1.80;
     char inicial = 'A';

     cout << "Edad: " << edad << endl;
     cout << "Altura: " << altura << endl;
     cout << "Inicial: " << inicial << endl;

     return 0;
}
```

En este ejemplo, se declaran e inicializan tres variables de diferentes tipos y se imprimen sus valores en la consola.

## Reglas para nombrar variables

Las variables no pueden:
- Empezar con un carácter especial (excepto el guion bajo `_`).
- Empezar con un número.
- Contener espacios.

Ejemplos de nombres de variables válidos e inválidos:

```cpp
// Válidos
int numeroEstudiantes;
float _salarioMensual;
char inicial;

// Inválidos
int 1numeroEstudiantes; // No puede empezar con un número
float salario Mensual; // No puede contener espacios
char @inicial; // No puede empezar con un carácter especial
```