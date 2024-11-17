# Condicionales en C++

Los condicionales son estructuras de control que permiten ejecutar diferentes bloques de código en función de si una condición es verdadera o falsa. En C++, los condicionales más comunes son `if`, `else if`, `else` y `switch`.

## Tipos de Condicionales

### `if`

La estructura `if` evalúa una condición y, si es verdadera, ejecuta el bloque de código asociado.

```cpp
if (condición) {
    // Código a ejecutar si la condición es verdadera
}
```

### `else if`

La estructura `else if` permite evaluar múltiples condiciones. Si la condición del `if` inicial es falsa, se evalúan las condiciones de los `else if` en orden.

```cpp
if (condición1) {
    // Código a ejecutar si condición1 es verdadera
} else if (condición2) {
    // Código a ejecutar si condición2 es verdadera
}
```

### `else`

La estructura `else` se utiliza para ejecutar un bloque de código si ninguna de las condiciones anteriores es verdadera.

```cpp
if (condición) {
    // Código a ejecutar si la condición es verdadera
} else {
    // Código a ejecutar si la condición es falsa
}
```

### `switch`

La estructura `switch` permite seleccionar entre múltiples bloques de código basándose en el valor de una expresión.

```cpp
switch (expresión) {
    case valor1:
        // Código a ejecutar si expresión == valor1
        break;
    case valor2:
        // Código a ejecutar si expresión == valor2
        break;
    default:
        // Código a ejecutar si ninguno de los casos anteriores es verdadero
}
```

## Operadores Lógicos

Los operadores lógicos se utilizan para combinar condiciones en los condicionales. Los operadores lógicos más comunes en C++ son:

- `&&` (AND lógico): Verdadero si ambas condiciones son verdaderas.
- `||` (OR lógico): Verdadero si al menos una de las condiciones es verdadera.
- `!` (NOT lógico): Invierte el valor de verdad de una condición.

### Ejemplos

```cpp
int a = 5;
int b = 10;

if (a > 0 && b > 0) {
    // Este bloque se ejecuta si a es mayor que 0 y b es mayor que 0
}

if (a > 0 || b < 0) {
    // Este bloque se ejecuta si a es mayor que 0 o b es menor que 0
}

if (!(a > 0)) {
    // Este bloque se ejecuta si a no es mayor que 0
}
```

Los condicionales y los operadores lógicos son fundamentales para controlar el flujo de ejecución en los programas y tomar decisiones basadas en condiciones específicas.