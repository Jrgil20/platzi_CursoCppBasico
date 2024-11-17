# Operadores en C++

## ¿Qué son los operadores?

Los operadores son símbolos que le indican al compilador que realice operaciones específicas sobre una o más variables. Los operadores son fundamentales en cualquier lenguaje de programación, ya que permiten manipular datos y variables para realizar cálculos y tomar decisiones.

## ¿Cómo funcionan los operadores?

Los operadores toman uno o más operandos (valores o variables) y realizan una operación sobre ellos. El resultado de esta operación puede ser asignado a una variable, utilizado en una expresión, o pasado como argumento a una función.

## Tipos de operadores

### Operadores aritméticos

Los operadores aritméticos se utilizan para realizar operaciones matemáticas básicas como suma, resta, multiplicación y división.

- `+` : Suma
- `-` : Resta
- `*` : Multiplicación
- `/` : División
- `%` : Módulo (resto de la división)

### Operadores lógicos

Los operadores lógicos se utilizan para realizar operaciones lógicas y devolver un valor booleano (`true` o `false`).

- `&&` : AND lógico
- `||` : OR lógico
- `!` : NOT lógico

### Operadores de comparación

Los operadores de comparación se utilizan para comparar dos valores y devolver un valor booleano (`true` o `false`).

- `==` : Igualdad
- `!=` : Desigualdad
- `<` : Menor que
- `>` : Mayor que
- `<=` : Menor o igual que
- `>=` : Mayor o igual que
### Otros operadores

Los operadores de incremento y decremento se utilizan para aumentar o disminuir el valor de una variable en uno.

- `++` : Incremento
- `--` : Decremento

### Operadores de asignación

Los operadores de asignación se utilizan para asignar valores a las variables.

- `=` : Asignación simple
- `+=` : Asignación con suma
- `-=` : Asignación con resta
- `*=` : Asignación con multiplicación
- `/=` : Asignación con división
- `%=` : Asignación con módulo

### Operadores bit a bit

Los operadores bit a bit se utilizan para realizar operaciones a nivel de bits.

- `&` : AND bit a bit
- `|` : OR bit a bit
- `^` : XOR bit a bit
- `~` : NOT bit a bit
- `<<` : Desplazamiento a la izquierda
- `>>` : Desplazamiento a la derecha

### Operador `sizeof`

El operador `sizeof` se utiliza para obtener el tamaño en bytes de un tipo de dato o de una variable. Es un operador unario que devuelve un valor de tipo `size_t`, el cual es un tipo de dato entero sin signo definido en la biblioteca estándar de C++.

El operador `sizeof` es fundamental para la gestión de memoria y para entender el tamaño de los tipos de datos en diferentes arquitecturas y plataformas.

#### Ejemplo de uso:

```cpp
#include <iostream>

int main() {
    int a = 10;
    double b = 5.5;

    std::cout << "Tamaño de int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Tamaño de a: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Tamaño de double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Tamaño de b: " << sizeof(b) << " bytes" << std::endl;

    return 0;
}
```

## Ejemplos

A continuación se presentan algunos ejemplos de cómo utilizar estos operadores en C++:

```cpp
#include <iostream>

int main() {
    int a = 10, b = 5;

    // Operadores aritméticos
    std::cout << "Suma: " << (a + b) << std::endl;
    std::cout << "Resta: " << (a - b) << std::endl;
    std::cout << "Multiplicación: " << (a * b) << std::endl;
    std::cout << "División: " << (a / b) << std::endl;
    std::cout << "Módulo: " << (a % b) << std::endl;

    // Operadores lógicos
    std::cout << "AND lógico: " << ((a > 0) && (b > 0)) << std::endl;
    std::cout << "OR lógico: " << ((a > 0) || (b > 0)) << std::endl;
    std::cout << "NOT lógico: " << !(a > 0) << std::endl;

    // Otros operadores
    std::cout << "Igualdad: " << (a == b) << std::endl;
    std::cout << "Desigualdad: " << (a != b) << std::endl;
    std::cout << "Menor que: " << (a < b) << std::endl;
    std::cout << "Mayor que: " << (a > b) << std::endl;
    std::cout << "Menor o igual que: " << (a <= b) << std::endl;
    std::cout << "Mayor o igual que: " << (a >= b) << std::endl;

    return 0;
}
```
