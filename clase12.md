# Condicional `switch`

## ¿Por qué usarlos?

El condicional `switch` es útil cuando se necesita comparar una variable contra múltiples valores posibles y ejecutar diferentes bloques de código según el valor de la variable. Es más legible y organizado que múltiples sentencias `if-else` cuando se trata de muchas condiciones.

## ¿En qué casos es mejor?

- Cuando se tiene una variable que puede tomar un número limitado de valores discretos.
- Cuando se desea mejorar la legibilidad del código en comparación con múltiples sentencias `if-else`.
- Cuando se busca una estructura de control más eficiente en términos de rendimiento para múltiples comparaciones.

## ¿En qué casos es peor?

- Cuando se necesita evaluar condiciones complejas o rangos de valores.
- Cuando se requiere evaluar expresiones booleanas o condiciones que no son simples comparaciones de igualdad.
- Cuando se trabaja con tipos de datos que no son compatibles con `switch` (por ejemplo, cadenas de texto en algunos lenguajes).

## ¿Por qué usarlo y cuándo?

Usar `switch` es recomendable cuando se tiene una variable con un conjunto limitado de valores posibles y se desea una estructura de control clara y eficiente. Es especialmente útil en casos donde se tienen muchas condiciones que evaluar y se busca evitar la complejidad de múltiples sentencias `if-else`.

## Casos de uso

- Menús de opciones en aplicaciones.
- Decisiones basadas en estados de una máquina de estados.
- Procesamiento de comandos en aplicaciones de consola.

## Casos donde no se debería usar

- Cuando las condiciones a evaluar son complejas o involucran rangos de valores.
- Cuando se necesita evaluar expresiones booleanas.
- Cuando se trabaja con tipos de datos no compatibles con `switch`.

## Ejemplos

### Ejemplo 1: Uso básico de `switch`

```cpp
#include <iostream>

int main() {
    int opcion = 2;

    switch (opcion) {
        case 1:
            std::cout << "Opción 1 seleccionada" << std::endl;
            break;
        case 2:
            std::cout << "Opción 2 seleccionada" << std::endl;
            break;
        case 3:
            std::cout << "Opción 3 seleccionada" << std::endl;
            break;
        default:
            std::cout << "Opción no válida" << std::endl;
            break;
    }

    return 0;
}
```

### Ejemplo 2: `switch` con `enum`

```cpp
#include <iostream>

enum class Estado { INICIO, PROCESO, FIN };

int main() {
    Estado estadoActual = Estado::PROCESO;

    switch (estadoActual) {
        case Estado::INICIO:
            std::cout << "Estado: INICIO" << std::endl;
            break;
        case Estado::PROCESO:
            std::cout << "Estado: PROCESO" << std::endl;
            break;
        case Estado::FIN:
            std::cout << "Estado: FIN" << std::endl;
            break;
        default:
            std::cout << "Estado desconocido" << std::endl;
            break;
    }

    return 0;
}
```

## Resumen de la clase

En esta clase, aprendimos sobre el uso del condicional `switch` en C++. Este tipo de estructura de control es útil para comparar una variable contra múltiples valores posibles y ejecutar diferentes bloques de código según el valor de la variable. Es más legible y organizado que múltiples sentencias `if-else` cuando se trata de muchas condiciones.

Discutimos los casos en los que es mejor usar `switch`, como cuando se tiene una variable con un número limitado de valores discretos, y los casos en los que es peor, como cuando se necesita evaluar condiciones complejas o rangos de valores. También vimos ejemplos prácticos de cómo usar `switch` con variables enteras y con enumeraciones (`enum`).

En resumen, el `switch` es una herramienta poderosa para simplificar y organizar el código cuando se tienen múltiples condiciones que evaluar.