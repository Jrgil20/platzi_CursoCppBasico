# Entrada y Salida de Datos en C++


## La librería iostream

Su nombre completo es **Input/Output Stream** y su función es manejar el flujo de entrada-salida de datos.

### `cout` y `cin`

- **`cout`**: Flujo de salida, usada para imprimir datos en la pantalla.
- **`cin`**: Flujo de entrada, usada para ingresar datos al programa, una de las tantas maneras de hacerlo es con el teclado.

### Operadores de direccionamiento

Son los encargados de comunicar la o las fuentes de información (Por ejemplo, una variable o constante) con el objeto, en este caso, `cout` o `cin`. Los operadores de direccionamiento están conformados por el signo de mayor (`>>`), que sería para la entrada de datos y el signo de menor que (`<<`), para la salida de datos.

### Ejemplo de código

```cpp
#include <iostream>

using namespace std;

int main() {
    int edad = 0;

    cout << "Edad: ";
    cin >> edad;
    cout << "Tu edad es: " << edad << endl;

    return 0;
}
```


### Secuencias de escape

Las secuencias de escape son combinaciones de caracteres que representan caracteres especiales. En C++, las secuencias de escape más comunes incluyen:

- `\n`: Nueva línea
- `\t`: Tabulación horizontal
- `\\`: Barra invertida
- `\"`: Comillas dobles
- `\'`: Comillas simples

### Ejemplo de uso de secuencias de escape

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hola, mundo!\n";
    cout << "Esta es una nueva línea.\n";
    cout << "Aquí hay una tabulación:\tTabulado\n";
    cout << "Imprimir una barra invertida: \\\n";
    cout << "Imprimir comillas dobles: \"Hola\"\n";
    cout << "Imprimir comillas simples: \'Hola\'\n";

    return 0;
}
```