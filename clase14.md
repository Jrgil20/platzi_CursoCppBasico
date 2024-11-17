# Ciclo `while` y `do-while`

## ¿Qué es un ciclo `while`?
Un ciclo `while` es una estructura de control que permite repetir un bloque de código mientras una condición sea verdadera. La sintaxis básica es:

```cpp
while (condición) {
    // Código a ejecutar mientras la condición sea verdadera
}
```

## ¿Qué es un ciclo `do-while`?
Un ciclo `do-while` es similar al ciclo `while`, pero la condición se evalúa después de ejecutar el bloque de código al menos una vez. La sintaxis básica es:

```cpp
do {
    // Código a ejecutar al menos una vez y mientras la condición sea verdadera
} while (condición);
```

## ¿Para qué sirven estos ciclos?
Estos ciclos se utilizan para repetir un bloque de código múltiples veces, lo cual es útil cuando no se sabe de antemano cuántas veces se debe repetir el bloque.

## Precaución con los ciclos infinitos
Es importante tener cuidado con los ciclos infinitos, que ocurren cuando la condición nunca se vuelve falsa. Esto puede llevar a que el programa se quede atrapado en un bucle sin fin, consumiendo recursos y potencialmente bloqueando el sistema.

## Ejemplos

### Ejemplo de `while`
```cpp
int i = 0;
while (i < 5) {
    std::cout << i << std::endl;
    i++;
}
```

### Ejemplo de `do-while`
```cpp
int i = 0;
do {
    std::cout << i << std::endl;
    i++;
} while (i < 5);
```

## Diferencias con el ciclo `for`
El ciclo `for` es otra estructura de control que se utiliza para repetir un bloque de código un número específico de veces. La sintaxis básica es:

```cpp
for (inicialización; condición; actualización) {
    // Código a ejecutar mientras la condición sea verdadera
}
```
### razones para usar while en vez de for sin condicones
El uso de `while` en lugar de `for` para crear un ciclo infinito puede ser preferido por varias razones:

1. **Claridad y legibilidad**: Un ciclo `while` con una condición explícita de `true` puede ser más claro y fácil de entender para otros desarrolladores que lean el código. La intención de crear un ciclo infinito es más obvia.

2. **Consistencia**: En muchos lenguajes de programación, los ciclos `while` se utilizan comúnmente para condiciones que se evalúan continuamente, mientras que los ciclos `for` se utilizan más frecuentemente para iteraciones con un número conocido de repeticiones. Usar `while` para un ciclo infinito puede ser más consistente con estas convenciones.

3. **Flexibilidad**: Un ciclo `while` puede ser más flexible si en algún momento decides agregar una condición de salida. Es más fácil modificar un `while (true)` para incluir una condición de terminación que modificar un `for (;;)`.

Aquí tienes un ejemplo de cómo se vería el mismo ciclo infinito utilizando `while`:

```cpp
while (true) {
    // Código a ejecutar infinitamente
    std::cout << "Este ciclo es infinito" << std::endl;
}
```

Ambos enfoques lograrán el mismo resultado, pero el uso de `while (true)` puede ser más intuitivo y fácil de mantener.


### Diferencias clave:
- **Inicialización y actualización**: En el ciclo `for`, la inicialización y la actualización de la variable de control se manejan en la misma línea, lo que puede hacer el código más compacto.
- **Uso típico**: El ciclo `for` se utiliza cuando se conoce de antemano el número de iteraciones, mientras que `while` y `do-while` se utilizan cuando el número de iteraciones depende de una condición que se evalúa en tiempo de ejecución.

## Resumen de la clase
En esta clase aprendimos sobre los ciclos `while` y `do-while`, su sintaxis, usos y precauciones. También vimos ejemplos prácticos y discutimos las diferencias con el ciclo `for`.
