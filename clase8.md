# Clase 8: Constantes y Listas

## Constantes

### ¿Qué son?
Las constantes son valores que no cambian durante la ejecución del programa. Se definen una vez y no pueden ser modificadas.

### ¿Cómo se usan?
En C++, las constantes se pueden definir utilizando la palabra clave `const` o la directiva de preprocesador `#define`.

```cpp
const int MAX_VALUE = 100;
#define PI 3.14159
```

### ¿Para qué sirven?
Las constantes se utilizan para:
- Mejorar la legibilidad del código.
- Evitar errores al no permitir cambios accidentales.
- Facilitar el mantenimiento del código.

Una particularidad adicional que tienen las constantes es que no son almacenadas en memoria al momento de la ejecución, como es el caso de las variables. El compilador es quien se encarga de reemplazar el valor de dicha constante en cada lugar del programa en que se es referenciado.

### Buenas prácticas
- Utilizar nombres en mayúsculas para las constantes.
- Preferir `const` sobre `#define` para constantes con tipo.
- Definir las constantes en el ámbito más reducido posible.

## Listas

### ¿Qué son?
Las listas son estructuras de datos que permiten almacenar una colección de elementos. En C++, se pueden implementar utilizando arrays o contenedores de la biblioteca estándar (STL) como `std::vector` o `std::list`.

### ¿Cómo se usan?
Ejemplo con `std::vector`:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    for(int numero : numeros) {
        std::cout << numero << " ";
    }
    return 0;
}
```

### ¿Para qué sirven?
Las listas se utilizan para:
- Almacenar y manipular colecciones de datos.
- Facilitar operaciones como inserción, eliminación y búsqueda de elementos.

### Buenas prácticas
- Elegir el contenedor adecuado según las necesidades (e.g., `std::vector` para acceso rápido, `std::list` para inserciones/eliminaciones frecuentes).
- Utilizar iteradores para recorrer las listas.
- Evitar el uso de arrays crudos cuando sea posible.

## Ejemplo

```cpp
#include <iostream>
#include <vector>

const int MAX_ITEMS = 10;

int main() {
    std::vector<int> items;
    for(int i = 0; i < MAX_ITEMS; ++i) {
        items.push_back(i * 2);
    }

    for(int item : items) {
        std::cout << item << " ";
    }

    return 0;
}
```

## Resumen
En esta clase hemos aprendido sobre las constantes y listas en C++. Las constantes son valores inmutables que mejoran la legibilidad y mantenimiento del código. Las listas son estructuras de datos que permiten almacenar y manipular colecciones de elementos. Es importante seguir buenas prácticas para utilizar estas herramientas de manera eficiente y efectiva.