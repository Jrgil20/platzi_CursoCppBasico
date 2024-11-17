# Funciones y Procedimientos en C++

## ¿Qué son?

En C++, las funciones y procedimientos son bloques de código reutilizables que realizan una tarea específica. Una función devuelve un valor, mientras que un procedimiento (también conocido como función void) no devuelve ningún valor.

## ¿Para qué sirven?

Las funciones y procedimientos se utilizan para:
- Modularizar el código, haciéndolo más legible y mantenible.
- Evitar la repetición de código.
- Facilitar la depuración y el mantenimiento del software.
- Dividir tareas complejas en sub-tareas más manejables.

## Diferencia entre funciones y procedimientos

En C++, (esto no estaba en el curso) la principal diferencia entre funciones y procedimientos radica en el valor de retorno:

- **Funciones**: Son bloques de código que realizan una tarea específica y devuelven un valor. El tipo de valor que devuelven se especifica en la declaración de la función. Por ejemplo, una función que devuelve un entero se declara con `int` como tipo de retorno.

- **Procedimientos**: También conocidos como funciones `void`, son bloques de código que realizan una tarea específica pero no devuelven ningún valor. Se declaran con la palabra clave `void` como tipo de retorno.

### Ejemplo de una función

```cpp
int multiplicar(int a, int b) {
    return a * b;
}
```

### Ejemplo de un procedimiento

```cpp
void imprimirSaludo() {
    std::cout << "Hola, mundo!" << std::endl;
}
```

## ¿Cómo se usan?

### Declaración de una función

```cpp
tipo_de_retorno nombre_de_la_función(tipo_de_argumento argumento1, tipo_de_argumento argumento2, ...);
```

### Definición de una función

```cpp
tipo_de_retorno nombre_de_la_función(tipo_de_argumento argumento1, tipo_de_argumento argumento2, ...) {
    // Cuerpo de la función
    return valor_de_retorno; // Solo si la función no es void
}
```

### Ejemplo de una función que suma dos números

```cpp
int sumar(int a, int b) {
    return a + b;
}
```

### Llamada a una función

```cpp
int resultado = sumar(5, 3);
```

## Valores por defecto en funciones

En C++, puedes asignar valores por defecto a los parámetros de una función. Esto permite llamar a la función sin proporcionar todos los argumentos.

### Ejemplo

```cpp
void imprimirMensaje(std::string mensaje = "Hola, mundo!") {
    std::cout << mensaje << std::endl;
}
```

### Uso

```cpp
imprimirMensaje(); // Imprime "Hola, mundo!"
imprimirMensaje("¡Hola, C++!"); // Imprime "¡Hola, C++!"
```

## Casos de uso

- **Funciones matemáticas**: Realizar cálculos como suma, resta, multiplicación, etc.
- **Manipulación de cadenas**: Operaciones como concatenación, búsqueda, reemplazo, etc.
- **Gestión de archivos**: Leer y escribir archivos.
- **Interacción con el usuario**: Obtener y mostrar datos al usuario.
- **Algoritmos**: Implementar algoritmos de búsqueda, ordenación, etc.

Las funciones y procedimientos son fundamentales para escribir código eficiente y organizado en C++.