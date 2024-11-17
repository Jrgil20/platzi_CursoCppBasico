# Clase 5: Estructura básica de un programa en C++

## Estructura básica de un programa en C++

Un programa en C++ generalmente sigue la siguiente estructura:

1. **Incluir librerías**: Utilizamos `#include` para incluir librerías necesarias.
2. **Declarar el espacio de nombres**: Utilizamos `using namespace std` para evitar escribir `std::` antes de cada elemento estándar de C++.
3. **Definir la función `main`**: Es la función principal del programa y el punto de entrada.

### Ejemplo de un programa básico en C++

```cpp
#include <iostream> // Incluimos la librería iostream

using namespace std; // Utilizamos el espacio de nombres estándar

int main() {
    cout << "Hola, mundo!" << endl; // Mostramos un texto en pantalla
    return 0; // Indicamos que el programa terminó correctamente
}
```

### Explicación

- **Librería iostream**: Se incluye con `#include <iostream>`. Esta librería permite recibir datos de entrada o mostrar datos de salida.
- **using namespace std**: Permite utilizar nombres estándar de C++ sin necesidad de escribir `std::` antes de cada uno.
- **Función `main`**: Es la función principal de nuestro código y lo primero que ejecuta el programa.
- **`cout`**: Utilizamos `cout` para mostrar texto en pantalla. Por ejemplo, `cout << "Hola, mundo!" << endl;` muestra "Hola, mundo!" en la consola.

### Resumen

La estructura básica de un programa en C++ incluye la inclusión de librerías necesarias, la declaración del espacio de nombres estándar, y la definición de la función `main`, que es el punto de entrada del programa. Utilizamos `cout` para mostrar información en pantalla.
